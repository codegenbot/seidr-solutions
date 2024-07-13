```
def bowling_score(frames):
    score = 0
    frame_count = 1
    rolls = list(map(int, frames.replace('/', '0').replace('X', '10')))
    i = 0
    while i < len(rolls):
        if rolls[i] == 10:
            if frame_count < 10:
                score += rolls[i]
                if i + 1 < len(rolls) and (str(rolls[i+1]) == 'X' or str(rolls[i+1]) == '10'):
                    i += 1
                    score += rolls[i]
                else:
                    score += sum(rolls[i+1:i+3])
            break
        elif i + 1 < len(rolls) and int(frames[i].split('/')[0]) + int(frames[i].split('/')[1]) == 10:
            if frame_count < 10:
                score += rolls[i] + rolls[i+1]
                if frame_count < 9:
                    score += rolls.pop(i+2) if str(rolls[i+2]) != 'X' and int(str(rolls[i+2])) < 10 - rolls[i] - rolls[i+1] else rolls.pop(i+3)
            break
        i += 1
    return score