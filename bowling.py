```
def bowling_score(roll):
    score = 0
    roll_index = 0
    for frame in range(1, 11):
        if '/' in str(roll[roll_index:roll_index+2]):
            bonus = int(str(roll[roll_index]).strip('/')) + int(str(roll[roll_index+1]).strip('/'))
            score += 10
            roll_index += 2
        else:
            if int(str(roll[roll_index])) < 10:
                score += int(str(roll[roll_index]))
                roll_index += 1
            elif int(str(roll[roll_index:roll_index+2]).strip('X')) == 10:
                bonus = 10
                score += 10
                roll_index += 2
            else:
                first_roll = int(str(roll[roll_index]).strip('X'))
                second_roll = int(str(roll[roll_index+1]).strip('X'))
                score += first_roll + second_roll
                roll_index += 2
    return score