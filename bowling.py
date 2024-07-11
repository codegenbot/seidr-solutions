def bowling_score(frames):
    score = 0
    frame = 0
    balls = list(frames)
    for i in range(10):
        if balls[frame] == "X":
            score += 10 + (
                10
                if balls[frame + 2] == "X"
                else int(balls[frame + 1]) + int(balls[frame + 2])
            )
            frame += 1
        elif balls[frame + 1] == "/":
            score += 10 + (10 if balls[frame + 2] == "X" else int(balls[frame + 2]))
            frame += 2
        else:
            score += int(balls[frame]) + int(balls[frame + 1])
            frame += 2
    return score


frames = input()
print(bowling_score(frames))