def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i].isdigit():
            if game[i + 1].isdigit():
                score += int(game[i]) + int(game[i + 1])
            else:
                score += int(game[i]) * 10
            if frame < 9 and game[i] == "X":
                score += 10 + bowling_score(game[i + 2 :])[0]
                frame = 9
        elif game[i] == "X":
            score += 10
            if frame < 9:
                score += int(bowling_score(game[i + 1 :])[0])
                frame = 9
        else:
            score += 10 - int(game[i])
    return [score, frame]