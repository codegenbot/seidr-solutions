import re

def calculate_score(bowls):
    frames = re.findall(r'(\d+|-|X|/)', bowls)
    score = 0
    frame_index = 0
    
    for _ in range(10):
        if frames[frame_index] == 'X':
            score += 10 + strike_bonus(frames, frame_index)
            frame_index += 1
        elif frames[frame_index + 1] == '/':
            score += 10 + spare_bonus(frames, frame_index)
            frame_index += 2
        else:
            score += frame_sum(frames, frame_index)
            frame_index += 2
    
    return score

def strike_bonus(frames, frame_index):
    if frame_index + 2 < len(frames):
        if frames[frame_index + 2] == 'X':
            return 20
        else:
            return 10 + int(frames[frame_index + 2])
    return 10

def spare_bonus(frames, frame_index):
    if frame_index + 2 < len(frames):
        if frames[frame_index + 2] == 'X':
            return 10
        else:
            return int(frames[frame_index + 2])
    return 10

def frame_sum(frames, frame_index):
    return int(frames[frame_index]) + int(frames[frame_index + 1])

bowls = input()
print(calculate_score(bowls))