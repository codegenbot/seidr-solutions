def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            score += 30
        elif frames[i].isdigit():
            frame_score = int(frames[i]) + int(frames[i + 1])
            if frame_score < 10:
                score += frame_score
            else:
                score += 10
        else:
            first_roll, second_roll = map(int, frames[i].split("/"))
            if first_roll + second_roll == 10:
                score += 10
            elif first_roll == 10:
                score += 10 + second_roll
            else:
                score += first_roll + second_roll
    return score