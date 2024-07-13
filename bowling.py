```
def bowling_score(frames):
    score = 0
    frame_count = 1
    rolls = list(map(int, frames.replace('/', '')))
    i = 0
    while i < len(rolls):
        if i + 1 < len(rolls) and rolls[i] == 10:  
            score += 10 + sum(rolls[i+1:i+3])
            i += 2
        elif i + 1 < len(rolls):  
            frame_score = rolls[i] + rolls[i+1]
            if frame_score == 10:  
                score += 10 + rolls[i+2]
            else:
                score += frame_score
            i += 1
        else:
            if len(list(filter(lambda x: x != 0, rolls))) > 0:
                for j in range(len(rolls)):
                    score += rolls.pop()
            if frame_count < 10:
                score += sum(rolls[:])
            break
        frame_count += 1
    return score