```
def bowling_score(frames):
    score = 0
    frame_index = 0
    while frame_index < len(frames):
        if frames[frame_index] == 'X':
            if frame_index + 2 >= len(frames) or (frames[frame_index+1] in ['X', '/']):
                score += 10
                frame_index += 1
            else:
                score += 10 + int(frames[frame_index+1:frame_index+3])
                frame_index += 3
        elif frames[frame_index] == '/':
            if frame_index + 1 < len(frames) and frames[frame_index+1].isdigit():
                score += 10 + int(frames[frame_index+1])
            else:
                score += 10
            frame_index += 2
        else:
            for i in range(2):
                if frame_index + i >= len(frames):
                    break
                if frames[frame_index+i].isdigit():
                    frame_index += i
                    score += int(frames[frame_index-i:frame_index])
                    break
    return score