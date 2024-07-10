def bowling_score(bowling_str):
    score = 0
    current_frame = 1
    last_roll = [0, 0]

    for roll in bowling_str:
        if roll.isdigit():
            this_roll = int(roll)
            if this_roll == "/":
                score += 10 + sum(last_roll)
                last_roll = [0, 0]
                current_frame += 1
            else:
                if len(last_roll) < 2:
                    last_roll.append(this_roll)
                else:
                    raise Exception("Invalid input")
        elif roll in "-X":
            if current_frame == 10:
                raise Exception("Invalid input")
            if sum(last_roll) < 10:
                score += 10
            else:
                score += sum(last_roll)
            last_roll = [0, 0]
            current_frame += 1
        else:
            raise Exception("Invalid input")

    score += sum(last_roll)

    return score