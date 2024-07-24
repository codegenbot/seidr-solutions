```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(10):
        if rolls[roll_index] == 'X':
            score += 30
            roll_index += 1
        elif re.match(r'[-]/', rolls[roll_index]):
            first_roll, second_roll = map(int, rolls[roll_index].replace('-', '/').split('/'))
            score += first_roll + second_roll
            roll_index += 1
        else:
            first_roll, _ = map(int, rolls[roll_index].split('-'))
            if first_roll == 10:
                score += 30
            else:
                score += first_roll
            roll_index += 2
    return score