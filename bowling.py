```
def bowling_game(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 30
        elif frames[i] == '/':
            score += 10 + int(frames[i+1])
        else:
            frame_score = int(frames[i]) + int(frames[i+1])
            if frame_score >= 10:
                score += 10 + (10 - frame_score)
            else:
                score += frame_score
    return score