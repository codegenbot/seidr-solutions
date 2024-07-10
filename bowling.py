def bowling(score_str):
    score = 0
    frames = score_str.split("/")
    for i in range(len(frames)):
        if frames[i] == "X":
            score += 10
            if i < 9:
                next_frame = frames[i + 1]
                if next_frame == "X":
                    score += 10
                else:
                    score += int(next_frame[0])
                    if next_frame[1] == "X":
                        score += 10
                    elif next_frame[1] == "-":
                        score += 0
                    else:
                        score += int(next_frame[1])
        else:
            for j in range(len(frames[i])):
                if frames[i][j] == "X":
                    score += 10
                elif frames[i][j] == "-":
                    score += 0
                else:
                    score += int(frames[i][j])
    return score


# Read input from user
score_str = input()
print(bowling(score_str))