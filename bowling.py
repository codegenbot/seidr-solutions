```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(10):
        if rolls[roll_index] == 'X':
            score += 30
            roll_index += 1
        elif rolls[roll_index:roll_index+2].isdigit() and len(rolls[roll_index:roll_index+2]) > 1:
            if int(rolls[roll_index:roll_index+2]) < 10:
                score += int(rolls[roll_index:roll_index+2]) + 10
                roll_index += 2
            else:
                first_roll = int(rolls[roll_index])
                second_roll = int(rolls[roll_index+1])
                if first_roll + second_roll == 10:
                    score += 10 + 10
                    roll_index += 2
                else:
                    score += first_roll + second_roll
                    roll_index += 2
        elif rolls[roll_index].isdigit():
            score += int(rolls[roll_index])
            roll_index += 1
    return score