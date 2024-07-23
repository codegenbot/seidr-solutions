```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1, 11):
        if rolls[roll_index] == 'X':
            score += 30
            roll_index += 1
        elif rolls[roll_index:roll_index+2].count('/'):
            first, second = map(int, rolls[roll_index:roll_index+2].split('/'))
            if frame < 10:
                if first + 1 == 10:
                    score += 10 + 30 - first
                else:
                    score += first + second
                roll_index += 2
            elif frame == 10:
                score += first + second
                break
        else:
            first = int(rolls[roll_index])
            if frame < 9 and rolls[roll_index+1] == 'X':
                score += 10 + (30 - first)
                roll_index += 2
            elif rolls[roll_index:roll_index+2].count('/'):
                second = int(rolls[roll_index+1].split('/')[0])
                if frame < 9:
                    if first + 1 == 10:
                        score += 10 + (second - first)
                    else:
                        score += first + second
                elif frame == 9:
                    score += first + second
                roll_index += 2
            else:
                score += first + int(rolls[roll_index+1])
                if frame < 8:
                    if first + 2 == 10:
                        score += 10 + (10 - first)
                    elif int(rolls[roll_index+2]) == 'X':
                        score += 10 + 30 - first
                    else:
                        score += first + int(rolls[roll_index+1]) + int(rolls[roll_index+2])
                roll_index += 2
    return score