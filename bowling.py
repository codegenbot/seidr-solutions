def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(10):
        if rolls[roll_index] == 'X':
            score += 30
            roll_index += 1
        elif '/' in rolls[roll_index:roll_index+2]:
            first_roll, second_roll = map(int, rolls[roll_index:roll_index+2].replace('/', '-'))
            score += first_roll + second_roll
            roll_index += 2
        else:
            first_roll = int(rolls[roll_index])
            if rolls[roll_index+1] == 'X':
                score += 10 + first_roll
                roll_index += 1
            elif len(rolls[roll_index:roll_index+3]) > 2 and '/' in rolls[roll_index+1:roll_index+3]:
                second_roll = int((rolls[roll_index+1:roll_index+3]).replace('/', '-')[0])
                score += first_roll + second_roll
                roll_index += 2
            else:
                score += first_roll + int(rolls[roll_index+1])
                roll_index += 2
    return score