def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i] == "X":
            score += 10 + (10 - int(s[i + 1])) if frame < 9 else 10
            frame += 1
        elif s[i] == "/":
            strike = int(s[i - 1]) * 10 + 10
            bonus = int(s[i + 1])
            score += strike + bonus
            frame += 2
        else:
            points = int(s[i : i + 2])
            if points < 10:
                score += points
                frame += 1
            elif frame == 9 and points == 10:
                score += points
                frame += 1
            else:
                bonus = 10 - int(s[i]) + 1
                score += points + bonus
                frame += 2
    return score