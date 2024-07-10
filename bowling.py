def bowling(score):
    total = 0
    frame = 1
    while frame <= 10:
        if score[0] == "X":
            total += 30
            score = score[1:]
        elif score[0] in ["/", "-"]:
            first_roll = int(score[: score.find("/")])
            second_roll = int(
                score[score.find("/") + 1 : score.find("-") or len(score)]
            )
            total += first_roll + second_roll
            score = score[score.find("-") + 1 :].strip("/")
            frame += 1
        else:
            first_roll = int(score[0])
            if score[1] == "/":
                second_roll = 10 - first_roll
            else:
                second_roll = int(score[1])
            total += first_roll + second_roll
            score = score[2:].strip("/")
            frame += 1
    return total