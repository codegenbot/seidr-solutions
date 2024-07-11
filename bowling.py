```
def bowling_score(frames):
    score = 0
    frame_scores = [0] * 10
    for i in range(0, len(frames), 2):
        if frames[i].isdigit():
            if len(frames[i+1]) == 1:
                frame_scores[i//2] = int(frames[i])
            else:
                strike = sum(map(int, (frames[i], frames[i+1])))
                frame_scores[i//2] = strike
                while i < len(frames) - 4 and len(frames[i+2]) > 1:
                    i += 1
        else:
            scores = list(map(int, frames[i].split('/')))
            if sum(scores) == 10:
                score += 10
            else:
                frame_scores[i//2] = sum(scores)
    for i in range(10):
        if frame_scores[i] == 10:
            score += 10
        elif frame_scores[i] > 10:
            score += frame_scores[i]
        else:
            score += frame_scores[i]
    return score