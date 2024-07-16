```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1,11):
        if len(str(rolls)) >= frame * 2 - 1:
            if rolls[roll_index] == 'X':
                score += 10 + (10 if len(str(rolls)) >= frame*2 else int(rolls[roll_index+1]))
                roll_index += 1
            elif rolls[roll_index:roll_index+2].startswith('///'):
                score += 30
                roll_index += 2
            else:
                first_roll = int(rolls[roll_index])
                second_roll = int(rolls[roll_index + 1]) if len(str(rolls)) >= frame*2 else 10 - first_roll
                score += first_roll + second_roll
                roll_index += 2
        else:
            for i in range(frame,11):
                if len(str(rolls)) < i * 2 - 1:
                    return score
            break
    return score