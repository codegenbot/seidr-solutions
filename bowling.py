```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1, 11):
        if rolls[roll_index] == 'X':
            score += 10 + (10 - int(rolls[roll_index+1].split('/')[0])) if roll_index < 9 else 10
            roll_index += 2
        elif '/' in rolls[roll_index]:
            left, right = map(int, rolls[roll_index].split('/'))
            score += left + right
            roll_index += 1
        else:
            score += int(rolls[roll_index])
            roll_index += 1
    return score