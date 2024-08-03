```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1, 11):
        if rolls[roll_index] == 'X':
            if frame < 10:
                score += 30
            else:
                score += 10 + int(rolls[roll_index + 1].replace('/',''))
            roll_index += 1
        elif '/' in rolls[roll_index]:
            left, right = map(int, rolls[roll_index].split('/'))
            score += left + right
            roll_index += 1
        else:
            for i in range(1, 3):
                if i == 2 and frame < 10 and int(rolls[roll_index]) + int(rolls[roll_index + 1]) >= 10:
                    score += 10
                    break
                elif i == 2:
                    score += int(rolls[roll_index]) + int(rolls[roll_index + 1])
                    break
                else:
                    score += int(rolls[roll_index])
            roll_index += 1
    return score