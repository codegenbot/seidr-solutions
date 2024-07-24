def bowling_score(game):
    score = 0
    frames = game.split("/")
    for i in range(len(frames)):
        if frames[i].isdigit():
            strike = False
            spare = False
            if (
                len(frames) - i > 1
                and frames[i + 1].isdigit()
                and frames[i + 2].isdigit()
            ):
                spare = True
                score += int(frames[i]) + int(frames[i + 1])
                i += 1
            else:
                if i < len(frames) - 1 and frames[i + 1].isdigit():
                    strike = True
                score += int(frames[i])
        elif frames[i] == "X":
            score += 10
            if not spare and not strike:
                score += int(frames[i - 1])
        else:
            first_roll = int(frames[i][:-1])
            second_roll = int(frames[i][-1])
            score += first_roll + second_roll
    return score