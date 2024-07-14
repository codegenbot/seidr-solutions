```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1, 11):
        if rolls[roll_index] == 'X':
            score += 10
            roll_index += 1
        elif rolls[roll_index:roll_index+2].count('/'):
            ones, twos = map(int, rolls[roll_index:roll_index+2].split('/'))
            score += ones + twos
            roll_index += 2
        else:
            ones = int(rolls[roll_index])
            if frame < 10 and rolls[roll_index+1] == 'X':
                score += 10 + ones
                roll_index += 2
            elif rolls[roll_index:roll_index+2].count('/'):
                twos = int(rolls[roll_index+1])
                score += ones + twos
                roll_index += 2
            else:
                score += ones + int(rolls[roll_index+1])
                roll_index += 2
    return score