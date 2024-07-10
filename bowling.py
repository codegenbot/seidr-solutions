def bowling_score(bowling):
    score = 0
    roll = 0
    for i in range(10):
        if "/" in bowling[i * 2 : i * 2 + 1]:
            first_roll = int(bowling[i * 2 : i * 2].strip())
            second_roll = int(bowling[i * 2 + 1 : i * 2 * 2].strip())
            if first_roll == 10:
                score += first_roll + second_roll
            else:
                score += first_roll
                roll = sum(map(int, bowling[i * 2 : i * 2 * 2]))
                if roll < 10:
                    score += roll
                elif roll >= 10 and i != 9:
                    score += 10 + sum(
                        map(int, bowling[(i + 1) * 2 : (i + 1) * 2 + 1].strip())
                    )
                else:
                    score += roll
        else:
            score += int(bowling[i * 2 : i * 2 * 2].strip())
    return score