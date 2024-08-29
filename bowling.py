Here is the solution:

def bowling_score(game):
    score = 0
    frame = 1
    for roll in game + '/':
        if roll == 'X':
            score += 30
            frame += 1
        elif roll == '/':
            score += 10
            frame += 1
        else:
            strike = False
            if len(roll) > 1 and roll[0] == 'X':
                strike = True
                roll = int(roll[1])
            if roll != '0':
                score += int(roll)
                if not strike:
                    frame += 1
    return score