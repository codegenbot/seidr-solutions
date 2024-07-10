def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i].isdigit():
            if i + 1 < len(frames) and frames[i + 1].isdigit():
                score += int(frames[i : i + 2])
                i += 2
            else:
                try:
                    score += calculate_strike(int(frames[i]))
                except ValueError:
                    score += calculate_spare(frames[i], frames[i + 1]) + int(
                        frames[i + 2]
                    )
                i += 2
        elif frames[i] == "X":
            if i + 2 < len(frames) and frames[i + 1] in ["X", "/"]:
                score += 30
            else:
                try:
                    score += calculate_strike(int(frames[i + 1 : i + 3]))
                except ValueError:
                    pass
            i += 3
        elif frames[i] == "X" and i + 1 < len(frames) and frames[i + 1] == "X":
            score += 30
            i += 2

    return score


def calculate_strike(strike):
    return 10 + strike


def calculate_spare(roll1, roll2):
    return 10 + int(roll1 + roll2)