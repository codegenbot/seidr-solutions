```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1, 11):
        if len(rolls) > roll_index and rolls[roll_index] != '-':
            if len(rolls) > roll_index + 1 and rolls[roll_index + 1] != '-':
                score += sum(map(int, [str(rolls[roll_index]), str(rolls[roll_index + 1]))])
                roll_index += 2
            else:
                score += int(rolls[roll_index])
                roll_index += 1
        else:
            if rolls[roll_index - 1] == '/':
                score += 10
                break
            score += int('10' if len(rolls) > roll_index and rolls[roll_index] == 'X' else str(rolls[roll_index]))
            break
    return score