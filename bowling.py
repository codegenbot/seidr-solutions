Here is the Python solution:

def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1, 11):
        if rolls[roll_index] == 'X':
            score += 10
            roll_index += 1
        elif rolls[roll_index:roll_index+2].startswith('///'):
            score += 30
            roll_index += 2
        else:
            first_roll = int(rolls[roll_index])
            if rolls[roll_index+1] == '/':
                second_roll = 10 - first_roll
                score += first_roll + second_roll
                roll_index += 2
            else:
                second_roll = int(rolls[roll_index+1])
                score += first_roll + second_roll
                roll_index += 2
    return score