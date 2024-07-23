def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1,11):
        if rolls[roll_index] == 'X':
            score += 10
            if frame < 10:
                if rolls[roll_index+1] == 'X':
                    score += 10
                    roll_index += 2
                else:
                    first = int(rolls[roll_index+1].split('/')[0])
                    score += first + 10
                    roll_index += 2
        elif len(rolls[roll_index:roll_index+3]) == 3 and rolls[roll_index:roll_index+3][1] == '/':
            first, second = map(int, rolls[roll_index:roll_index+3].split('/'))
            score += first + second
            roll_index += 3
        else:
            first, second = map(int, rolls[roll_index:roll_index+2].split('/'))
            if frame < 9 and sum([10 if i == 'X' else int(i.split('/')[0]) for i in rolls[roll_index:roll_index+2]]) >= 10:
                score += 10 + (10 - first)
            else:
                score += first + second
            roll_index += 2
    return score