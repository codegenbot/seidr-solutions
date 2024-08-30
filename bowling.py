```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1, 11):
        if rolls[roll_index] == 'X':
            score += 10
            if frame < 10:
                score += int(rolls[roll_index+1])
            roll_index += 1
        elif '/' in rolls[roll_index:roll_index+2]:
            first_roll, second_roll = map(int, rolls[roll_index:roll_index+2].replace('/', '').split())
            if first_roll + second_roll == 10:
                score += first_roll + second_roll
                roll_index += 2
            else:
                score += first_roll
                score += second_roll
                roll_index += 2
        else:
            first_roll = int(rolls[roll_index])
            if frame < 10 and first_roll < 10:
                score += first_roll
                roll_index += 1
            elif frame == 10:
                score += first_roll + int(rolls[roll_index+1])
                roll_index += 2
            else:
                score += first_roll
                roll_index += 1
    return score