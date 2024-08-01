```
def bowling_score(roll):
    score = 0
    roll_list = list(map(int, re.sub('[^0-9]', '', roll)))
    for i in range(0, len(roll_list), 2):
        if i+1 < len(roll_list) and roll_list[i] == 10:
            score += 10 + roll_list[i+1]
        elif roll_list[i] + roll_list[i+1] >= 10:
            score += 10
        else:
            score += sum(roll_list[i:i+2])
    return score