```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(10):
        if rolls[roll_index] == 'X':
            score += 30
            roll_index += 1
        elif rolls[roll_index:roll_index+2].count('/'):
            first, second = map(int, rolls[roll_index:roll_index+2].split('/'))
            score += first + second
            roll_index += 2
        else:
            strike_count = 0
            while roll_index < len(rolls) and (rolls[roll_index] == 'X' or rolls[roll_index:roll_index+2].count('/') > 1):
                if rolls[roll_index] == 'X':
                    score += 10 + strike_count * 10
                    roll_index += 1
                    strike_count += 1
                else:
                    first, second = map(int, rolls[roll_index:roll_index+2].split('/'))
                    score += first + second
                    roll_index += 2
    return score