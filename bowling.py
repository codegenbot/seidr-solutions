def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i] == "X":
            if frame < 10:
                score += 30
            else:
                score += 10
            frame += 1
        elif game[i] == "/":
            right_pin = int(game[i + 1])
            left_pins = int(game[i - 1]) - 10
            score += left_pins + right_pin
            frame += 1
        else:
            right_pin = int(game[i : i + 2])
            if right_pin >= 10:
                score += 10
            else:
                score += right_pin
            frame += 1
    return score