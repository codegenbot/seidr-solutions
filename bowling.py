```
def bowling_score(frames):
    score = 0
    frames = [int(x) for x in frames.split('/')]
    frame_index = 0
    while frame_index < len(frames):
        if frames[frame_index] == 10:
            score += 10
            frame_index += 1
        else:
            if frame_index + 1 < len(frames) and frames[frame_index] + frames[frame_index + 1] == 10:
                score += 10
                frame_index += 2
            else:
                score += sum(frames[frame_index:frame_index+2])
                frame_index += 2