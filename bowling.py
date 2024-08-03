def bowling_score(game):
    score = 0
    roll = []
    for frame in game.split("/"):
        if len(frame) == 1:
            roll.append(int(frame))
        elif len(frame) > 1:
            frame_value = sum(map(int, frame))
            if frame_value >= 10:
                bonus = 10 - int(frame[0])
                score += 10
            else:
                bonus = 0
            roll.append(frame_value)
    for i in range(0, len(roll), 2):
        if roll[i] == 10:
            score += roll[i]
        elif roll[i] + roll[i + 1] >= 10:
            score += roll[i] + bonus
            bonus = 0
        else:
            score += roll[i] + roll[i + 1]
    return score