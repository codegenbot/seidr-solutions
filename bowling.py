```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1, 11):
        if rolls[roll_index] == 'X':
            score += 10
            roll_index += 1
        elif rolls[roll_index:roll_index+2].isdigit() and len(rolls[roll_index:roll_index+2]) == 2:
            first_roll = int(rolls[roll_index])
            second_roll = int(rolls[roll_index + 1])
            if first_roll + second_roll == 10:
                score += 10
                roll_index += 2
            else:
                score += first_roll + second_roll
                roll_index += 2
        else:
            if rolls[roll_index] == '/':
                first_roll = int(rolls[:roll_index].split('/')[-1])
                second_roll = 10 - first_roll
                score += first_roll + second_roll
                roll_index += len(rolls) - 1
            else:
                first_roll = int(rolls[0])
                second_roll = int(rolls[1])
                if first_roll + second_roll == 10:
                    score += 10
                    roll_index += 2
                else:
                    score += first_roll + second_roll
                    roll_index += 2
    return score