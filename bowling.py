def bowling_score(frames):
    score = 0
    frame_index = 0
    frame = 1
    
    while frame <= 10:
        if frames[frame_index] == 'X':
            score += 10
            score += get_strike_bonus(frames, frame_index)
            frame_index += 1
        elif frames[frame_index+1] == '/':
            score += 10
            score += get_spare_bonus(frames, frame_index)
            frame_index += 2
        else:
            score += get_frame_score(frames, frame_index)
            frame_index += 2
        
        frame += 1
    
    return score


def get_strike_bonus(frames, frame_index):
    bonus = 0
    if frames[frame_index+2] == 'X':
        bonus += 10
    else:
        bonus += int(frames[frame_index+2])
    
    if frames[frame_index+3] == 'X':
        bonus += 10
    else:
        bonus += int(frames[frame_index+3])
    
    return bonus


def get_spare_bonus(frames, frame_index):
    bonus = 0
    if frames[frame_index+2] == 'X':
        bonus += 10
    else:
        bonus += int(frames[frame_index+2])
    
    return bonus


def get_frame_score(frames, frame_index):
    score = int(frames[frame_index])
    score += int(frames[frame_index+1])
    return score


frames = input()
print(bowling_score(frames))