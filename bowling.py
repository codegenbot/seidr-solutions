```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1, 11):
        if rolls[roll_index] == 'X':
            if frame < 10:
                score += 10
                roll_index += 1
            else:
                if rolls[roll_index+1] == 'X':
                    score += 20
                    roll_index += 2
                else:
                    first_roll = int(rolls[roll_index+1].replace('/', ''))
                    score += 10 + first_roll
                    roll_index += 2
        elif rolls[roll_index:roll_index+2].count('/'):
            first_roll, second_roll = map(int, rolls[roll_index:roll_index+2].replace('/', '').split())
            if first_roll + second_roll == 10:
                score += first_roll + second_roll
                roll_index += 2
            else:
                score += first_roll + second_roll
                roll_index += 2
        else:
            first_roll = int(rolls[roll_index])
            if first_roll < 10:
                score += first_roll
                roll_index += 1
            elif frame == 9 and rolls[roll_index+1] != 'X':
                score += 20 - first_roll
                roll_index += 2
            else:
                score += 10
                roll_index += 1
    return score