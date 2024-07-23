def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1, 11):
        if rolls[roll_index] == 'X':
            score += 10
            roll_index += 1
        elif rolls[roll_index:roll_index+2].count('/'):
            first, second = map(int, rolls[roll_index:roll_index+2].split('/'))
            score += first + second
            roll_index += 2
        else:
            first = int(rolls[roll_index])
            if frame < 10 and (frame < 9 and rolls[roll_index+1] == 'X' or frame < 8 and rolls[roll_index+1] in ['/X']):
                score += 10 + (10 - first)
                roll_index += 2
            elif frame < 10 and rolls[roll_index:roll_index+2].count('/'):
                second = int(rolls[roll_index+1].split('/')[0])
                if second == 10:
                    roll_index += 2
                else:
                    score += first + second
                    roll_index += 2
            else:
                score += first + int(rolls[roll_index+1])
                roll_index += 2
    return score