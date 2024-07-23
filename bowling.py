def bowling_score(frames):
    frame = 1
    frame_score = [0] * 10
    i = 0

    while frame <= 10:
        score = 0  # Reset score at the beginning of each frame
        if frames[i] == "X":
            score += 10
            score += get_value(frames[i + 1])
            score += get_value(frames[i + 2])
            frame_score[frame - 1] = score
            frame += 1
            i += 1
        elif frames[i + 1] == "/":
            score += 10
            score += get_value(frames[i + 2])
            frame_score[frame - 1] = score
            frame += 1
            i += 2
        else:
            score += get_value(frames[i])
            if frames[i + 1] != "-":
                score += get_value(frames[i + 1])
            frame_score[frame - 1] = score
            frame += 1
            i += 2

    return sum(frame_score)


def get_value(char):
    if char == "X" or char == "/":
        return 10
    elif char == "-":
        return 0
    else:
        return int(char)


frames = input()
print(bowling_score(frames))