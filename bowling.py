def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(10):
        if rolls[roll_index] == 'X':
            score += 10
            roll_index += 1
        elif rolls[roll_index:roll_index+2].count('/'):
            first, second = map(int, rolls[roll_index:roll_index+2].split('/'))
            if first + second >= 10:
                score += first + second
            else:
                score += first + second + 10
            roll_index += 2
        else:
            first, second = map(int, rolls[roll_index:roll_index+2].split('/'))
            score += first + second
            roll_index += 2
    return score