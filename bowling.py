```
def bowling_score(rolls):
    score = 0
    roll = 0
    for frame in range(1, 11):
        if rolls[roll:roll+2] == 'XX':
            score += 30
            roll += 2
        elif rolls[roll] == '/':
            score += int(rolls[roll-1])
            roll += 1
        else:
            first_roll = int(rolls[roll])
            if frame < 10 and rolls[roll+1] != 'X' and int(rolls[roll+1]) + first_roll >= 10:
                score += 10
                roll += 2
            elif frame == 10 and (int(rolls[roll+1]) + first_roll >= 10 or rolls[roll+1] == 'X'):
                if first_roll < 10:
                    score += first_roll + int(rolls[roll+1])
                else:
                    score += 10 + 10
                roll += 2
            else:
                score += first_roll + int(rolls[roll+1])
                roll += 2
    return score