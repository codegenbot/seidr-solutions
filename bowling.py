def bowling_score(score):
    score = score.replace("/", "")
    total_score = 0
    frame = 1
    for i in range(len(score)):
        if score[i].isdigit():
            if len(score[i:]) >= 2 and score[i : i + 2] == "10":
                total_score += 10 + (10 - int(score[i])) * frame
                frame += 1
                i += 1
            elif score[i] == "X":
                total_score += 10 + (10 - int(score[: i - 1].replace("X", ""))) * frame
                frame += 1
            else:
                if (
                    len(score[i:]) >= 2
                    and score[i : i + 2] != "10"
                    and score[i : i + 2][0].isdigit()
                ):
                    total_score += int(score[i : i + 2]) + (10 - int(score[i])) * frame
                    i += 1
                    frame += 1
                else:
                    total_score += int(score[i])
    return total_score