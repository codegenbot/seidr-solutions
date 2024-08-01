def bowling_score(bowls):
    score = 0
    frame = 1
    frame_score = [0] * 10
    for i, bowl in enumerate(bowls):
        if bowl == "X":
            score += 10
            if frame <= 8:
                if bowls[i + 2] == "/":
                    score += 10
                else:
                    score += get_value(bowls[i + 1]) + get_value(bowls[i + 2])
            frame_score[frame - 1] = score
            frame += 1
        elif bowl == "/":
            score += 10 - get_value(bowls[i - 1])
            if frame <= 8:
                score += get_value(bowls[i + 1])
            frame_score[frame - 1] = score
            frame += 1
        elif bowl == "-":
            continue
        else:
            score += int(bowl)
            if frame <= 10:
                frame_score[frame - 1] = score
            if frame % 2 == 0:
                frame += 1
    return sum(frame_score)


def get_value(bowl):
    if bowl == "X":
        return 10
    elif bowl == "-":
        return 0
    else:
        return int(bowl)


bowls = input()
print(bowling_score(bowls))