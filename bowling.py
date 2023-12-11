def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    i = 0
    while frame <= 10:
        if bowls[i] == 'X':
            score += 10 + bonus(bowls[i+1], bowls[i+2])
            i += 1
        elif bowls[i] == '/':
            score += 10 + bonus(bowls[i+1], '0')
            i += 1
        else:
            score += int(bowls[i])
        i += 1
        frame += 1
    return score

def bonus(bowl1, bowl2):
    if bowl1 == 'X':
        return 10
    elif bowl2 == '/':
        return 10 - int(bowl1)
    else:
        return int(bowl1) + int(bowl2)

bowls = input()
score = calculate_bowling_score(bowls)
print(score)