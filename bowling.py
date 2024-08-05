def bowling(input_str):
    score = 0
    frame = 1
    balls = list(input_str.replace("X", "10").replace("/", "10"))

    for i in range(len(balls)):
        if balls[i] == "10":
            score += 10
            if balls[i + 2].isdigit():  # not spare or strike in the next frame
                score += int(balls[i + 1]) + int(balls[i + 2])
            else:
                if balls[i + 2] == "X":
                    score += 10
                else:
                    score += 10
                    if balls[i + 3].isdigit():
                        score += int(balls[i + 3])
        else:
            if balls[i] != "/":
                score += int(balls[i])
            if balls[i] == "/":
                score += 10 - int(balls[i - 1])
        if frame < 10:
            if balls[i] == "X" or balls[i] == "/":
                frame += 1

    return score


# Read input from user
input_str = input().strip()
print(bowling(input_str))