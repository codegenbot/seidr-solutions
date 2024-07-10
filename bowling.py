```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(10):
        if rolls[roll_index] == 'X':
            score += 30
            roll_index += 1
        elif rolls[roll_index:roll_index+2].count('/'):
            first, second = map(int, rolls[roll_index:roll_index+2].replace('/', '0').split('0'))
            score += first + second
            roll_index += 2
        else:
            first, second = map(int, rolls[roll_index:roll_index+3].split())
            if first + second == 10:
                score += 10 + int(rolls[roll_index+2])
                roll_index += 3
            else:
                score += first + second
                roll_index += 3
    return score