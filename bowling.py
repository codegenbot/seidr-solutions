```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1,11):
        if rolls[roll_index] == 'X':
            score += 10
            roll_index += 1
        elif '/' in rolls[roll_index:roll_index+2]:
            first_roll, second_roll = map(int, rolls[roll_index:roll_index+2].replace('/', '-'))
            score += first_roll + second_roll
            roll_index += 2
        else:
            first_roll = int(rolls[roll_index])
            if first_roll < 10:
                score += first_roll
                roll_index += 1
            else:
                score += 10
                roll_index += 1
    return score