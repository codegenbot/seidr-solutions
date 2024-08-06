def bowling(score):
    score_per_frame = [0] * 10
    for i in range(len(score)):
        if score[i].isdigit():
            if score[i + 1].isdigit():
                score_per_frame[int(i / 2)] += int(score[i : i + 2])
            else:
                score_per_frame[int(i / 2)] += int(score[i])
        elif score[i] == "X":
            score_per_frame[int(i / 2)] = 10 + (10 - i % 2)
        elif score[i] == "/":
            if score[i - 1].isdigit():
                score_per_frame[int((i - 1) / 2)] += 10 - int(score[i - 1])
    return sum(score_per_frame)