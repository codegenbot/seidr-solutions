def bowling_score(frames):
    score = 0
    frame = 1
    for bowl in frames:
        if bowl == "X":
            score += 10 + (10 - int(frames[frames.index(bowl) - 2])) * 2
            frame -= 1
        elif bowl == "/":
            first_bowl = int(frames[: frames.index(bowl)].split("/")[-1])
            second_bowl = 10 - first_bowl
            score += first_bowl + second_bowl
            frame -= 1
        else:
            if frame < 10:
                score += int(bowl)
            elif frame == 10 and bowl != "0":
                score += int(bowl) + (score % 10)
            frame += 1
    return score