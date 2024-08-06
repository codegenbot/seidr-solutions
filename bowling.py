```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(10):
        if len(rolls[roll_index:]) < (frame + 1):
            first_roll = int(rolls[roll_index])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            roll_index += 2
        elif rolls[roll_index] == 'X':
            score += 10
            roll_index += 1
        else:
            first_roll = int(rolls[roll_index])
            if len(rolls[roll_index:]) > 1 and rolls[roll_index+1] != '/':
                second_roll = int(rolls[roll_index+1])
                if first_roll + second_roll == 10:
                    score += 10
                else:
                    score += first_roll + second_roll
                roll_index += 2
            else:
                if len(rolls[roll_index:]) > 1 and rolls[roll_index+1] != '/':
                    second_roll = int(rolls[roll_index+1])
                    score += first_roll
                    roll_index += 2
                else:
                    score += first_roll
                    roll_index += 1
    return score