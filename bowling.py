```Python
def bowling_score(frames):
    score = 0
    rolls = list(map(int, frames.replace('/', '')))
    i = 0
    while len(rolls) > 0:
        if rolls[i] == 'X':
            score += 10
            i += 1
            if len(rolls) > 1 and rolls[i] == 'X':
                score += 10
                i += 2
            elif rolls[i] == '/':
                score += 10 + rolls[i+1]
                i += 3
        elif rolls[i] == '/':
            frame_score = rolls[i-1] + 10 - rolls[i-1]
            score += frame_score
            i += 2
        else:
            frame_score = sum(rolls[i:i+2])
            if frame_score == 10:
                score += frame_score
                i += 2
            else:
                score += frame_score
                i += 1
    return score