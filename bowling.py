def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i].isdigit():
            first_roll = int(game[i])
            if i + 1 < len(game) and game[i + 1].isdigit():
                second_roll = int(game[i + 1])
                score += second_roll + first_roll
                if frame == 10:
                    return score
                frame += 1
            elif game[i + 1] == "X":
                score += 10 + (10 - int(game[i+2].isdigit()))
                frame += 1
                if game[i+2].isdigit():
                    i+=2
                else:
                    break
            else:
                score += 10 - int(game[i + 1])
                frame += 1
        else:
            if game[i] == "X":
                score += 10
                frame += 1
            elif game[i] == "/":
                score += 10
                frame += 1
    return score