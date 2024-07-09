def bowling_score(bowling_str):
    score = 0
    frame = 1
    for roll in bowling_str:
        if roll == "X":
            score += 30
            frame += 1
        elif roll == "/":
            continue
        else:
            strike = int(roll)
            while frame < 10 and strike > 0:
                if strike >= 10:
                    score += 10 + 10
                    frame += 2
                    break
                else:
                    score += strike
                    frame += 1
                    strike -= int(roll)
    return score