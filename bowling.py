```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(10):
        if rolls[roll_index] == 'X':
            score += 30
            roll_index += 1
        elif rolls[roll_index:roll_index+2].count('/'):
            one, two = map(int, rolls[roll_index:roll_index+2].replace('/', '-').split('-'))
            score += one + two
            roll_index += 2
        else:
            one = int(rolls[roll_index])
            if one == 10:
                score += 10 + 10
                roll_index += 1
            else:
                score += one
                roll_index += 1
    return score