```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(10):
        if rolls[roll_index] == 'X':
            score += 30
            roll_index += 1
        elif '/' in rolls[roll_index]:
            left, right = map(int, rolls[roll_index].split('/'))
            score += left + right
            roll_index += 1
        else:
            if frame < 9 and int(rolls[roll_index]) + int(rolls[roll_index+1]) >= 10:
                if int(rolls[roll_index]) == 10:
                    score += 30
                else:
                    score += int(rolls[roll_index]) + int(rolls[roll_index+1])
                roll_index += 2
            else:
                score += int(rolls[roll_index])
                roll_index += 1
    return score