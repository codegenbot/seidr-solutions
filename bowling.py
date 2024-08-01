```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1, 11):
        if rolls[roll_index] == 'X':
            score += 10
            roll_index += 1
        elif rolls[roll_index:roll_index+2].count('/'):
            first_roll, second_roll = map(int, rolls[roll_index:roll_index+2].split('/'))
            score += first_roll + second_roll
            roll_index += 2
        else:
            for i in range(1, 3):
                if i == 1 and rolls[roll_index] == 'X':
                    score += 10
                    roll_index += 1
                    break
                elif i == 2 and rolls[roll_index:roll_index+2].count('/'):
                    first_roll, second_roll = map(int, rolls[roll_index:roll_index+2].split('/'))
                    score += first_roll + second_roll
                    roll_index += 2
                    break
                else:
                    score += int(rolls[roll_index])
                    roll_index += 1
    return score