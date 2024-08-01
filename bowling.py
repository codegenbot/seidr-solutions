def bowling_score(game):
    score = 0
    frame = 1
    roll = 0

    for char in game:
        if char == "X":
            score += 30
            frame += 1
        elif char == "/":
            score += 10 + int(game[roll : roll + 2].replace("/", ""))
            frame += 1
            roll += 3
        else:
            if int(char) == 10:
                score += 10
                frame += 1
            else:
                if frame < 10:
                    score += int(char)
                    roll += 1
                else:
                    if int(char) != "X":
                        if int(game[roll - 1].replace("0", "")) + int(char) <= 10:
                            score += int(char) + int(game[roll - 1].replace("0", ""))
                        else:
                            score += 10 - int(game[roll - 1].replace("0", "").zfill(2))
                    roll += 1
    return score