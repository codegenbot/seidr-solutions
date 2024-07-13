```Python
def bowling_score(frames):
    score = 0
    rolls = list(map(int if c.isdigit() else 10 if c == 'X' else 10-sum(map(int,c)) if c == '/' else 0 for c in frames))
    i = 0
    while len(rolls) > 0:
        if rolls[i] == 10:
            score += rolls[i]
            i += 1
            if len(rolls) > 1 and rolls[i] == 10:
                score += rolls[i]
                i += 2
            elif rolls[i] == 10:
                score += rolls[i] + rolls[i+1]
                i += 3
        else:
            frame_score = sum(rolls[i:i+2])
            if frame_score == 10:
                score += frame_score
                i += 2
            else:
                score += frame_score
                i += 1
    return score