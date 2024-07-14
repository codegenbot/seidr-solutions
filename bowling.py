def bowling_game(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            first_roll = int(s[i])
            if i + 1 < len(s) and s[i + 1].isdigit():
                second_roll = int(s[i + 1])
                score += first_roll + second_roll
                frame += 1
                if first_roll == 10:
                    score += second_roll
                elif first_roll + second_roll >= 10:
                    score += 10
            else:
                score += first_roll
                if first_roll < 10:
                    frame += 1
        else:
            score += 10
            frame += 1
    return score