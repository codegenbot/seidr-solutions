def bowling(score):
    score = score.replace("/", "")
    total_score = 0
    frame = 1
    while frame <= 10:
        if len(score) > 0 and score[0] != "X":
            num_pins = int(score[0])
            score = score[1:]
            if num_pins == 10:
                total_score += 30
                frame += 1
            else:
                total_score += num_pins + 10
                frame += 1
        elif len(score) > 0 and score[0] == "X":
            total_score += 10
            frame += 1
            if len(score) >= 2 and score[1] != "/":
                score = score[2:]
            else:
                score = score[1:]
        else:
            break
    return total_score