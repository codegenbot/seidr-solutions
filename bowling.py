```
def bowling_game(s):
    score = 0
    s += '/' * (len(s) % 10)
    frames = [list(map(int, s[i:i+2] if i < len(s)-1 else [s[i]])) for i in range(0, len(s), 2)]
    for i, frame in enumerate(frames):
        if sum(frame) == 3:
            score += 3
        elif sum(frame) == 2:
            if frames[i+1][0] >= 10:
                score += 2 + frames[i+1][0]
            else:
                score += 2
        else:
            if len(frame) > 1 and frame[0] == 10:
                if i < 9:
                    score += sum(frame)
                if i < 8:
                    score += frames[i+1][0]
                if i < 7:
                    score += frames[i+2][0]
            else:
                score += sum(frame)
    return score