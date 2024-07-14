```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i].isdigit() and frames[i+1] == '/':
            frame_score = int(frames[i]) + int(frames[i+1])
        else:
            strike_count = 0
            while i < len(frames) - 1 and (frames[i] == 'X' or not frames[i+1].isdigit()):
                if frames[i] == 'X':
                    strike_count += 10
                else:
                    frame_score = int(frames[i]) + int(frames[i+1])
                i += 2
            score += max(10, frame_score)
        score += frame_score
    return score