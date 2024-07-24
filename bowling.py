def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    frame_index = 0

    for i in range(len(bowls)):
        if frame > 10:
            break

        if bowls[i] == "X":
            score += 10 + get_strike_bonus(bowls, i + 1)
            frame += 1
        elif bowls[i] == "/":
            score += 10 - int(bowls[i - 1]) + int(bowls[i + 1])
            frame += 1
            frame_index = 0
        elif bowls[i].isdigit():
            score += int(bowls[i])
            frame_index += 1

            if frame_index == 2 or bowls[i] == "-":
                frame += 1
                frame_index = 0

    return score