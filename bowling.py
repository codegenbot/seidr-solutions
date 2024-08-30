Here is the solution:

def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1, 11):
        if len(rolls[roll_index:]) < 2:
            if len(rolls[roll_index:]) == 1:
                score += int(rolls[roll_index])
            break
        if rolls[roll_index] == 'X':
            score += 10
            roll_index += 1
        elif rolls[roll_index].isdigit():
            first_roll = int(rolls[roll_index])
            roll_index += 1
            if len(rolls[roll_index:]) >= 2 and rolls[roll_index-1] != 'X' and str(first_roll) + rolls[roll_index] == '10':
                score += 10
                roll_index += 1
            else:
                score += first_roll
                if len(rolls[roll_index:]) >= 2 and int(rolls[roll_index]) + int(rolls[roll_index+1]) > 9:
                    score += int(rolls[roll_index])
                    roll_index += 2
                elif len(rolls[roll_index:]) >= 2 and rolls[roll_index] == '0':
                    break
        else:
            if str(first_roll) + rolls[roll_index] == '10':
                score += 10
                roll_index += 2
            else:
                score += first_roll + int(rolls[roll_index])
                roll_index += 2
    return score