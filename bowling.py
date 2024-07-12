```
def bowling_score(frames):
    score = 0
    frame_count = 1
    rolls = list(map(lambda x: int(x) if x.isdigit() else 10 if x == 'X' else 0 if x == '-' else x, frames.replace('/', '')))
    i = 0
    while i < len(rolls):
        if i + 1 < len(rolls) and rolls[i] == 10:
            # Check for X (strike)
            if i + 2 >= len(rolls) or rolls[i+2] in ['X', '-']:
                score += 10
                i += 3
            else:
                score += rolls[i]
                i += 2
        elif i + 1 < len(rolls):
            frame_score = rolls[i] + rolls[i+1]
            if frame_score == 10:
                # Check for X (strike) or - (spare)
                if i + 3 >= len(rolls) or rolls[i+2] in ['X', '-']:
                    score += frame_score
                    i += 2
                else:
                    score += frame_score
                    i += 2
            else:
                score += frame_score
                i += 1
        else:
            if len(list(filter(lambda x: isinstance(x, int) and x != 0, rolls))) > 0:
                for j in range(len(rolls)):
                    score += rolls.pop()
            break
    return score