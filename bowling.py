def bowling_score(game):
    score = 0
    frame = 1
    for roll in game.split("/"):
        if len(roll) == 2 and roll[0] != "X":
            strike = False
            spare = False
            first_roll = int(roll[0])
            second_roll = int(roll[1])
            if first_roll + second_roll == 10:
                spare = True
            elif first_roll == 10:
                strike = True
        else:
            first_roll = int(roll)
            strike = False
            spare = False
        if strike:
            score += 10 + first_roll + first_roll
            frame += 1
        elif spare:
            score += 10 + first_roll
            frame += 1
        else:
            score += first_roll + second_roll
            frame += 1
    return score