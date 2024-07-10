def bowling_score(bowls):
    score = 0
    frame = 1
    ball = 0
    frame_score = [0] * 10

    for i in range(len(bowls)):
        if bowls[i] == "X":
            frame_score[frame - 1] += 10
            if frame < 10:
                if bowls[i + 2] == "/":
                    frame_score[frame - 1] += 10
                else:
                    frame_score[frame - 1] += (
                        10
                        + (10 if bowls[i + 1] == "X" else int(bowls[i + 1]))
                        + (10 if bowls[i + 2] == "X" else int(bowls[i + 2]))
                    )
            frame += 1
        elif bowls[i] == "/":
            frame_score[frame - 1] += 10 - int(bowls[i - 1])
            if frame < 10:
                frame_score[frame - 1] += (
                    10 if bowls[i + 1] == "X" else int(bowls[i + 1])
                )
            frame += 1
        else:
            frame_score[frame - 1] += int(bowls[i])
            if ball == 1:
                frame += 1
            ball = (ball + 1) % 2

    for i in range(10):
        score += frame_score[i]

    return score


# Read input from user
bowls = input()
print(bowling_score(bowls))