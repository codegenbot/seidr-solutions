def bowling_score(frames):
    score = 0
    frame = 0
    while frame < len(frames):
        if frames[frame].isdigit():
            strike = False
            for i in range(1, 4):
                if frame + i >= len(frames) or not frames[frame + i].isdigit():
                    break
                score += int(frames[frame : i + 1])
                if i == 2:
                    strike = True
            if strike:
                frame += 3
            else:
                frame += 3
        elif frames[frame] == "X":
            score += 30
            frame += 1
        else:
            if frames[frame] == "/":
                first_roll, second_roll = map(
                    int, frames[frame - 1 : frame + 2].replace("/", "-").split("-")
                )
                score += max(first_roll, second_roll)
                frame += 3
            else:
                first_roll = int(frames[frame])
                score += first_roll
                frame += 1
    return score