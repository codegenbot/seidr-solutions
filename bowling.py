def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split("/"):
        if len(frame) == 1:
            score += int(frame)
            roll += 1
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            score += first_roll + second_roll
            roll += 1
        else:
            spare = True
            for i, col in enumerate(frame):
                if col.isdigit():
                    if i > 0 and col != frame[i - 1]:
                        spare = False
                        break
            if spare:
                score += 10 + int(frame[-2])
                roll += 1
            else:
                score += sum(map(int, frame)) - 10
                roll += 1
    return score