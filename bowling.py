def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i * 2:i * 2 + 1] == "X":
            score += 10
            if i < 9:
                strike_bonus = int(frames[(i+1)*2:(i+2)*2]) + int(frames[(i+2)*2:(i+3)*2])
                score += strike_bonus
        elif frames[i * 2:i * 2 + 1] == "/":
            score += 10
            spare = int(frames[2*i:2*i+2])
            score += spare
        else:
            roll1 = int(frames[i * 2:i * 2 + 1])
            roll2 = int(frames[i * 2 + 1:i * 2 + 2]) if len(frames[i * 2:i * 4]) == 3 else 0
            score += roll1 + roll2
    return score