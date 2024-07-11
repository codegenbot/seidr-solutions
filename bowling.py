```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i].isdigit():
            first_roll = int(game[i])
            second_roll = 0
            if i + 1 < len(game) and game[i+1].isdigit():
                second_roll = int(game[i+1])
            elif game[i+1] == "X":
                second_roll = 10 - first_roll
            elif game[i+1] == "/":
                second_roll = 10 - first_roll

            if first_roll + second_roll == 10:
                if frame < 9:
                    score += 10
                else:
                    if frame == 9 and (game[18].isdigit() or game[18] == "X"):
                        if game[i+2].isdigit():
                            score += int(game[i+2]) + 10
                        else:
                            score += 10
            elif first_roll == 10:
                score += 10
                frame += 1
            else:
                score += first_roll + second_roll
                frame += 1

    return score