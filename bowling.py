```
def bowling_score(frames):
    score = 0
    rolls = list(map(int, frames.replace('/', '')))
    i = 0
    while i < len(rolls):
        if rolls[i] == 10: 
            score += 10 + (frames[i].index('X') * 2 + frames[i+1:i+6].count('/'))
            i += 3
        elif i + 1 < len(rolls) and rolls[i] + rolls[i+1] == 10: 
            score += 10 + rolls[i+2]
            i += 3
        else:
            frame_score = rolls[i] + (i+1 < len(rolls) and rolls[i+1])
            if frame_score < 10:
                while rolls[i:i+frame_score] != list(range(frame_score,0,-1)):
                    score += rolls.pop(0)
            i += 2
        frame_count += 1
    return score