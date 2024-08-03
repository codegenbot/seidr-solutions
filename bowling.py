def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i].isdigit():
            first_roll = int(frames[i])
            if i + 1 < len(frames) and frames[i + 1].isdigit():
                second_roll = int(frames[i + 1])
                if first_roll == 10:
                    score += 10 + second_roll
                elif second_roll == 10:
                    score += first_roll + 10
                else:
                    score += first_roll + second_roll
            else:
                if first_roll == 10:
                    score += 10
                else:
                    score += first_roll
        else:
            if frames[i] == "X":
                score += 10
            elif frames[i] == "/":
                continue
            else:
                score += int(frames[i])
    return score