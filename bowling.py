```
def bowling_score(frames):
    score = 0
    frame_scores = [0] * 10
    for i in range(0, len(frames), 2):
        if frames[i].isdigit():
            if len(frames[i+1]) == 1:
                frame_scores[i//2] = int(frames[i])
            else:
                frame_scores[i//2] = int(frames[i]) + int(frames[i+1])
        else:
            frame_scores[i//2] = sum(map(int, frames[i].split('/')))
    for i in range(10):
        if frame_scores[i] == 10:
            score += 10
        elif frame_scores[i] > 10:
            if i < 9 and (frame_scores[i+1] == 10 or frame_scores[i+1] > 10):
                score += frame_scores[i] + frame_scores[i+1]
            else:
                score += 10 + frame_scores[i] - 2
        else:
            score += frame_scores[i]
    return score