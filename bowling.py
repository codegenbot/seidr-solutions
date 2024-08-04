def bowling_score(game):
    score = 0
    roll = [int(x) for x in re.findall(r"\d", game)]
    frame = 0
    while len(roll) > 0:
        if roll[0] == 10:
            score += 10
            del roll[0]
            continue
        elif roll[0:2].count(str(10)) > 0:
            if roll[0:2][0] == "1":
                score += 10 + roll[2]
                del roll[:3]
            else:
                score += sum(map(int, roll[0:2]))
                del roll[:2]
        elif roll[0] + roll[1] >= 10:
            if roll[0] > 9:
                score += 10
                del roll[0]
            else:
                score += roll[0] + roll[1]
                del roll[:2]
        else:
            score += sum(map(int, roll[0:2]))
            del roll[:2]
        frame += 1
    return score