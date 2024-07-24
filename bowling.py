def bowling_score(game):
    score = 0
    frame_num = 1
    for i in range(0, len(game), 2):
        if game[i].isdigit():
            first_roll = int(game[i])
            if i + 1 < len(game) and game[i + 1].isdigit():
                second_roll = int(game[i + 1])
                score += sum([first_roll, second_roll]) + 10
            elif game[i + 1] == "/":
                score += first_roll + 10
                frame_num -= 1
        else:
            if game[i] == "X":
                score += 30
                frame_num -= 1
            elif game[i] == "-":
                continue
            elif game[i].isdigit():
                score += int(game[i]) + 10
    return score