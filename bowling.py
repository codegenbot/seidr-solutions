def bowling_score(frames):
    score = 0
    roll_count = [1, 1, 1, 1, 1, 1, 1, 1, 1, 1]
    for i in range(len(frames)):
        if frames[i].isdigit():
            if i < 9 and frames[i] == "X":
                score += 30
                roll_count[0] = 0
                continue
            elif i < 9:
                if (
                    frames[i + 1].isdigit() and frames[i + 2].isdigit()
                    and int(frames[i]) + int(frames[i + 1]) + int(frames[i + 2]) >= 10
                ):
                    score += 10 - (int(frames[i]) + int(frames[i + 1]))
                elif (
                    frames[i + 1].isdigit() and int(frames[i]) + int(frames[i + 1]) >= 10
                ):
                    score += 10 - int(frames[i])
                else:
                    score += int(frames[i])
                roll_count[0] -= 1
            elif i == 9:
                if frames[i] == "X":
                    score += 10
                else:
                    score += int(frames[i])
        else:
            if frames[i] == "/":
                if roll_count[0] > 0:
                    score += 10
                    roll_count[0] -= 1
    for i in range(1, len(roll_count)):
        if roll_count[i] > 0 and roll_count[i - 1] == 0:
            score += 10
    return score