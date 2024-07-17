def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            score += 30
        elif frames[i] == "/":
            score += 10 + int(frames[i + 1])
        else:
            score_frame = 0
            for j in range(i, min(i + 2, len(frames))):
                if frames[j] == "X":
                    score_frame += 10 + (10 - int(frames[j - 1 :])) if i != 0 else 10
                    break
                elif frames[j] == "/":
                    score_frame += 10 + int(frames[j + 1])
                    break
                else:
                    score_frame += int(frames[j])
            score += score_frame
    return score