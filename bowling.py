```
def bowling_score(game):
    score = 0
    roll = 0
    frames = game.split('/')
    for i in range(len(frames)):
        if len(frames[i]) == 1:
            score += 10
        elif len(frames[i]) == 2:
            rolls = list(map(int, frames[i]))
            score += sum(rolls)
        else:
            rolls = list(map(int, frames[i].replace('X', '0').split('X')))
            if rolls[0] == 10: # strike
                roll = rolls[1]
                score += 10 + roll
            elif len(frames) > i + 1 and int(frames[i+1]) != 0:
                score += 10 + sum(rolls)
            else:
                score += 10 + max(rolls)
    return score