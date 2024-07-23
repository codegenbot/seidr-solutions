```
def bowling_score(game):
    score = 0
    frame = 0
    roll = 0
    i = 0
    while i < len(game):
        if game[i] == "X":
            score += 30
            frame += 1
            i += 1
            if frame < 10:
                if game[i] == "X":
                    score += 30
                    frame += 1
                else:
                    score += int(game[i])
                i += 1
        elif game[i] == "/":
            score += roll * (int(game[i-1]) + int(game[i+1]))
            frame += 1
            i += 2
        else:
            if game[i] == "X" or game[i+1] == "X" or game[i:i+2] == "//":
                continue
            score += int(game[i])
            roll += 1
            if roll < 2:
                i += 1
            elif game[i] == "/":
                score += roll * (int(game[i-1]) + int(game[i+1]))
                frame += 1
                i += 2
    return score