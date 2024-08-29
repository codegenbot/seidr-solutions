```
def bowling_game(rolls):
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
            if frame < 10 and rolls[roll_index+1] == 'X':
                score += 10 + (30 - first_roll)
                roll_index += 2
            elif frame < 10 and rolls[roll_index+1:roll_index+3].count('/'):
                second_roll = int(rolls[roll_index+1])
                score += first_roll + second_roll
                roll_index += 3
            else:
                score += first_roll + int(rolls[roll_index+1])
                roll_index += 2
    return score