def bowling_score(score):
    total = 0
    frame = 1
    while frame <= 10:
        if score[2 * frame - 2 : 2 * frame] == "X":
            total += 10 + (10 if frame < 10 else 0)
            frame += 1
        elif score[2 * frame - 2 : 2 * frame].count("/"):
            left, right = map(int, score[2 * frame - 2 : 2 * frame].split("/"))
            total += left + right
            frame += 1
        else:
            strikes = 0
            while len(score[2 * frame - 2 :]) > 1 and score[2 * frame - 2] != "X":
                left, right = map(int, score[2 * frame - 2 : 2 * frame + 1].split("/"))
                total += left + right
                frame += 1
                if len(score[2 * frame - 2 :]) > 1 and score[2 * frame - 2] != "X":
                    strikes += 1
            if strikes == 0:
                total += int(score[2 * frame - 1])
    return total