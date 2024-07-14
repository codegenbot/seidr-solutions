def bowling_score(gutter):
    score = 0
    roll = 0
    frames = gutter.split("/")
    for i in range(10):
        if len(frames) > i:
            if frames[i] == "X":
                score += 30
                roll = 1
            elif len(frames[i]) == 2 and int(frames[i]) < 10:
                score += int(frames[i])
                roll = 1
            else:
                first_roll = int(frames[i][0])
                if roll == 1 and first_roll != 10:
                    score += first_roll
                second_roll = int(frames[i][1])
                if roll == 1 and first_roll + second_roll == 10:
                    score += second_roll + first_roll
                else:
                    score += first_roll + second_roll
            if roll == 1:
                if i < 8 and frames[i + 1] in ["X", "XX"]:
                    score += 10
                elif i < 9 and frames[i + 1][:2].isdigit():
                    score += int(frames[i + 1][:2])
        else:
            if roll == 0 and i < 8 and frames[i + 1] in ["X", "XX"]:
                score += 10
            elif i < 9 and frames[i + 1][:2].isdigit():
                score += int(frames[i + 1][:2])
    return score