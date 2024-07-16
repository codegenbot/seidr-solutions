def bowling_game(frames):
    score = 0
    current_frame_score = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            current_frame_score += 10
        elif len(frame) > 1 and frame[0] != "X":
            strikes, spares, pins = map(int, frame)
            current_frame_score += str_to_pins(pins)
            score += current_frame_score
            current_frame_score = 0
        else:
            if current_frame_score == 10:
                score += 10
                current_frame_score = 0
            elif strikes > 1 or spares > 1:
                raise ValueError("Invalid input")
    return score


def str_to_pins(pins):
    if pins[0] == "X":
        return 10 + str_to_pins(pins[1:])
    else:
        return sum(map(int, pins)) * (pins[0] != "0")


print(bowling_game(input()))