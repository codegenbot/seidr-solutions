import re

def bowling_score(bowls):
    score = 0
    frames = re.findall(r'(\d|-|X|/)', bowls)
    frame_index = 0
    
    for i in range(10):
        if frames[frame_index] == 'X':
            score += 10 + get_strike_bonus(frames, frame_index)
            frame_index += 1
        elif frames[frame_index+1] == '/':
            score += 10 + get_spare_bonus(frames, frame_index)
            frame_index += 2
        else:
            score += get_frame_score(frames, frame_index)
            frame_index += 2
    
    return score

def get_strike_bonus(frames, frame_index):
    bonus = 0
    next_frame = frames[frame_index+1]
    if next_frame == 'X':
        bonus += 10
        if frames[frame_index+2] == 'X':
            bonus += 10
        else:
            bonus += int(frames[frame_index+2])
    else:
        bonus += int(next_frame)
        bonus += int(frames[frame_index+2])
    return bonus

def get_spare_bonus(frames, frame_index):
    bonus = 0
    bonus += 10
    if frames[frame_index+2] == 'X':
        bonus += 10
    else:
        bonus += int(frames[frame_index+2])
    return bonus

def get_frame_score(frames, frame_index):
    score = 0
    score += int(frames[frame_index])
    score += int(frames[frame_index+1])
    return score

bowls = input()
print(bowling_score(bowls))