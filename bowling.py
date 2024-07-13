```
def bowling_score(frames):
    score = 0
    frame_count = 1
    rolls = list(map(int, frames.replace('/', '')))
    i = 0
    while i < len(rolls):
        if i + 1 < len(rolls) and rolls[i] == 10: 
            if i + 2 >= len(rolls): 
                score += 10 * (frame_count)
                break
            elif rolls[i+1] != 0:
                score += 10
            else:
                score += 10
                i += 2
        elif i + 1 < len(rolls):
            frame_score = rolls[i] + rolls[i+1]
            if frame_score == 10: 
                score += 10
                i += 2
            else:
                score += frame_score
                i += 1
        else:
            while i < len(rolls) and (rolls[i] == 0 or rolls[i] < sum(rolls[:i+1])):
                score += rolls.pop(0)
            if i >= len(rolls):
                break
        frame_count += 1
    return score