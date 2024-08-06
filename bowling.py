```
def bowling_score(score_string):
    score = 0
    rolls = list(map(int, re.sub('[/-]', '', score_string)))
    for i in range(10):
        if rolls[i*2] == 10:
            score += 30
            rolls_index = (i*2)+1
            while rolls_index < (i*2)+3:
                score += rolls[rolls_index]
                rolls_index += 1
        elif rolls[i*2] + rolls[(i*2)+1] > 10:
            bonus = 10 - rolls[i*2]
            score += 10 + bonus
        else:
            score += rolls[i*2] + rolls[(i*2)+1]
    return score