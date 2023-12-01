import re

def bowling_score(round):
    score = 0
    frames = re.findall(r'(\d{1,2}|X|/|-)', round)
    frame_index = 0

    for _ in range(10):
        frame = frames[frame_index]
        
        if frame == 'X':
            score += 10 + get_frame_score(frames[frame_index+1])
            if frame_index < 8 and frames[frame_index+2] == '/':
                score += 10
            else:
                score += get_frame_score(frames[frame_index+2])
            frame_index += 1
        elif '/' in frame:
            score += 10 + get_frame_score(frames[frame_index+1])
            frame_index += 1
        else:
            score += get_frame_score(frame)
        
        frame_index += 1
    
    return score

def get_frame_score(frame):
    if frame == 'X':
        return 10
    elif '/' in frame:
        return 10 - int(frame[0])
    else:
        return int(frame[0]) + int(frame[1])

round = input()
print(bowling_score(round))