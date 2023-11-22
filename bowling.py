def calculate_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    spare = False
    strike = False
    for i in range(len(bowls)):
        if bowls[i] == "X":
            score += 10
            if frame < 10:
                if bowls[i + 2] == "/":
                    score += 10
                else:
                    score += int(bowls[i + 1]) + int(bowls[i + 2])
            frame_score = 0
            strike = True
            frame += 1
        elif bowls[i] == "/":
            score += 10 - int(bowls[i - 1])
            if frame < 10:
                if bowls[i + 1] == "/":
                    score += 10
                else:
                    score += int(bowls[i + 1])
            frame_score = 0
            spare = True
            frame += 1
        elif bowls[i] == "-":
            frame_score += 0
        else:
            frame_score += int(bowls[i])
            if frame_score == 10:
                if frame < 10:
                    if bowls[i + 1] == "/":
                        score += 10
                    else:
                        score += int(bowls[i + 1])
                if spare:
                    score += int(bowls[i])
                    spare = False
                if strike:
                    score += int(bowls[i])
                    strike = False
                frame += 1
                frame_score = 0
            elif frame_score < 10:
                if spare:
                    score += int(bowls[i])
                    spare = False
                if strike:
                    score += int(bowls[i])
                    strike = False
    return score