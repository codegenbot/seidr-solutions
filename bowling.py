def calculate_score(frames):
    score = 0
    frame_index = 0
    for frame in range(10):
        if frames[frame_index] == 'X':
            score += 10 + bonus(frames, frame_index)
            frame_index += 1
        elif frames[frame_index+1] == '/':
            score += 10 + int(frames[frame_index+2])
            frame_index += 2
        else:
            score += int(frames[frame_index]) + int(frames[frame_index+1])
            frame_index += 2
    return score

def bonus(frames, frame_index):
    if frames[frame_index+1] == 'X':
        if frames[frame_index+2] == 'X':
            return 20
        else:
            return 10 + int(frames[frame_index+2])
    else:
        return int(frames[frame_index+1]) + int(frames[frame_index+2])
    
frames = input().strip()
print(calculate_score(frames))