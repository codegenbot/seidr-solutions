def bowling_score(game):
    score = 0
    roll = 1
    for i in range(0, len(game), 2):
        if game[i] == "X":
            score += 30
            roll += 1
        elif game[i] == "/":
            first_roll = int(game[i - 1])
            second_roll = 10 - first_roll
            if second_roll > 0:
                score += first_roll + second_roll
            else:
                frame_score = 10
            roll += 1
        else:
            first_roll = int(game[i])
            second_roll = int(game[i + 1])
            if first_roll + second_roll == 10:
                score += 10
                roll += 1
            elif first_roll == 10:
                frame_score = first_roll + second_roll
                score += frame_score
                roll += 1
            else:
                score += first_roll + second_roll
                roll += 1
    return score