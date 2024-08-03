def bowling(score):
    score = score.replace("/", "")
    total_score = 0
    frame = 1
    for i in range(0, len(score), 2):
        if score[i].isdigit():
            if score[i + 1].isdigit():
                total_score += int(score[i]) + int(score[i + 1])
            else:
                if frame == 10:
                    total_score += (int(score[i]) * 2) + 10
                else:
                    total_score += max(int(score[i]), 10)
        elif score[i] == "X":
            total_score += 30 - 10 * (9 - frame)
            frame = 10
        frame += 1
    return total_score