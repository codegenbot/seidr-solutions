```
def bowling_score(frames):
    score = 0
    frame_count = 1
    rolls = list(map(lambda x: int(x) if x != 'X' and x != '/' else 10, frames.replace('-', '/').replace('/', '-1-').replace('X', '-10-')))
    i = 0
    while i < len(rolls):
        frame_score = sum(rolls[i:i+2])
        if frame_score == 10:
            if rolls[i] == 10: 
                score += 10 + rolls[i+2]
            else: 
                score += 10 + sum(rolls[i+2:])
        elif frame_score < 10:
            score += frame_score
            i += 1
        else:
            score += 10
            while len(rolls) and rolls[0] == 0:
                rolls.pop(0)
            if len(rolls):
                score += sum(rolls[:])
        i += 2
    return score