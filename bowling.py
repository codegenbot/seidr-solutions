def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1, 11):
        if rolls[roll_index] == 'X':
            score += 10
            roll_index += 1
        elif rolls[roll_index:roll_index+2].count('/'):
            first, second = map(int, rolls[roll_index:roll_index+2].split('/'))
            score += first + second - (9 - frame)
            roll_index += 2
        else:
            first = int(rolls[roll_index])
            if frame < 9 and rolls[roll_index+1] == 'X':
                score += 10 + (30 - first) - (9 - frame)
                roll_index += 2
            elif rolls[roll_index:roll_index+2].count('/'):
                second = int(rolls[roll_index+1].split('/')[0])
                if frame < 8 and (second == 10 or second > first):
                    score += first + 10 - (9 - frame)
                else:
                    score += first + second
                roll_index += 2
            else:
                score += first + int(rolls[roll_index+1]) - (9 - frame)
                roll_index += 2
    return score