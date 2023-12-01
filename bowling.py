import re

def bowling_score(bowls):
    score = 0
    frames = re.findall(r'(\d|X|/|-){1,2}', bowls)
    
    for i in range(len(frames)):
        frame = frames[i]
        if frame == 'X':
            score += 10 + get_strike_bonus(bowls, i)
        elif '/' in frame:
            score += 10 + get_spare_bonus(bowls, i)
        else:
            score += get_frame_score(frame)
    
    return score

def get_strike_bonus(bowls, frame_index):
    bonus = 0
    next_frame = bowls[frame_index + 1]
    if next_frame == 'X':
        bonus += 10
        if frame_index + 2 < len(bowls):
            bonus += get_strike_bonus(bowls, frame_index + 1)
    else:
        bonus += get_frame_score(next_frame)
    
    return bonus

def get_spare_bonus(bowls, frame_index):
    bonus = 0
    next_frame = bowls[frame_index + 1]
    if next_frame == 'X':
        bonus += 10
    else:
        bonus += int(next_frame[0])
    
    return bonus

def get_frame_score(frame):
    score = 0
    for bowl in frame:
        if bowl.isdigit():
            score += int(bowl)
    
    return score

bowls = input()
print(bowling_score(bowls))