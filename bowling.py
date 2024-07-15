```
def bowling_score(frames):
    score = 0
    rolls = [int(x) for x in frames.replace('/', '')]
    for i in range(0, len(rolls), 2):
        if rolls[i] == 10:
            score += 10 + (i < 7 and sum(rolls[:i+3]) or sum(rolls[i+1:]))
        else:
            score += rolls[i] + (rolls[i+1] or 0)
    return score