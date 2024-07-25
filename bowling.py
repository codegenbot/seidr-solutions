```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1, 11):
        if rolls[roll_index] == 'X':
            if frame < 10:
                if rolls[roll_index + 1] == '/':
                    score += 30
                    roll_index += 2
                else:
                    score += 10
                    roll_index += 2
        elif '/' in rolls[roll_index]:
            first_roll, second_roll = map(int, rolls[roll_index].split('/'))
            score += first_roll + second_roll
            roll_index += 1
        else:
            for i in range(1, 4):
                if i > int(rolls[roll_index]):
                    score += i
                    break
                score += 10
            roll_index += 1
    return score