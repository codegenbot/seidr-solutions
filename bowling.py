```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(10):
        if rolls[roll_index] == 'X':
            score += 30
            roll_index += 1
        elif rolls[roll_index:roll_index+2].count('/'):
            left, right = map(int, rolls[roll_index:roll_index+2].split('/'))
            score += left + right
            roll_index += 2
        else:
            strike = 0
            for i in range(2):
                if i == 1 and rolls[roll_index-1] == 'X':
                    strike = 10
                    break
                elif rolls[roll_index].isdigit():
                    score += int(rolls[roll_index])
                    roll_index += 1
                else:
                    score += int(rolls[roll_index-1]) + int(rolls[roll_index])
                    break
            if strike == 0:
                score += int(rolls[roll_index])
                roll_index += 1
    return score