def bowling_score(game):
    score = 0
    frames = game.split("/")
    for i in range(len(frames)):
        if frames[i].isdigit():
            if len(frames) - i <= 2:
                if len(frames) - i == 1:
                    score += int(frames[i])
                else:
                    score += int(frames[i]) + int(frames[i + 1])
            elif len(frames[i]) > 1:
                score += int(frames[i])
        else:
            if frames[i] == "X":
                score += 10
            else:
                score += 5
    return score