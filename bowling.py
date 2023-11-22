import re


def bowling_score(frames):
    frames = re.sub("-", "0", frames)
    frames = list(frames)

    score = 0
    frame = 0
    frame_scores = []

    while frame < 10:
        if frames[0] == "X":
            score += 10 + get_frame_score(frames[1:])
            frames.pop(0)
        elif frames[1] == "/":
            score += 10 + int(frames[0])
            frames.pop(0)
            frames.pop(0)
        else:
            score += int(frames[0]) + int(frames[1])
            frames.pop(0)
            frames.pop(0)

        frame_scores.append(score)
        frame += 1

    return score


def get_frame_score(frames):
    if frames[0] == "X":
        return 10
    elif frames[1] == "/":
        return 10
    else:
        return int(frames[0]) + int(frames[1])


frames = input()
score = bowling_score(frames)
print(score)