```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1, 11):
        if rolls[roll_index] == 'X':
            score += 30
            roll_index += 1
        elif rolls[roll_index:roll_index+2].count('/'):
            first_roll, second_roll = map(int, rolls[roll_index:roll_index+2].split('/'))
            score += first_roll + second_roll
            roll_index += 2
        else:
            first_roll = int(rolls[roll_index])
            score += first_roll
            if first_roll < 10:
                roll_index += 1
                if rolls[roll_index] == 'X':
                    score += 10
                    roll_index += 1
                elif rolls[roll_index:roll_index+2].count('/'):
                    second_roll = int(rolls[roll_index:].split('/')[0])
                    score += second_roll
                    roll_index += len(str(second_roll))
            else:
                roll_index += 1
    return score