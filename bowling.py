def bowling_score(bowls):
    score = 0
    frame = 1
    ball = 0
    frame_score = 0
    streak = 0

    for bowl in bowls:
        if frame > 10:
            break

        if bowl == "X":
            score += 10
            frame_score = 0
            streak += 1

            if frame < 10:
                score += get_bowl_value(bowls[ball + 1]) + get_bowl_value(
                    bowls[ball + 2]
                )

        elif bowl == "/":
            score += 10 - frame_score
            frame_score = 0

            if frame < 10:
                score += get_bowl_value(bowls[ball + 1])

        else:
            score += get_bowl_value(bowl)
            frame_score += get_bowl_value(bowl)

            if streak > 0:
                score += get_bowl_value(bowl)

            streak = 0

        ball += 1

        if frame < 10 and (bowl == "X" or ball % 2 == 0):
            frame += 1

    return score


def get_bowl_value(bowl):
    if bowl == "-":
        return 0
    else:
        return int(bowl)