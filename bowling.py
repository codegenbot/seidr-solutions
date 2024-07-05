def calculate_bowling_score(score_str):
    def get_value(char):
        return 10 if char == "X" else 0 if char == "-" else int(char)

    frames = []
    i = 0
    while i < len(score_str):
        if score_str[i] == "X":
            frames.append(score_str[i])
            i += 1
        elif score_str[i + 1] == "/":
            frames.append(score_str[i : i + 2])
            i += 2
        else:
            frames.append(score_str[i : i + 2])
            i += 2

    total_score = 0
    for frame in range(10):
        if frames[frame] == "X":
            total_score += (
                10
                + get_value(frames[frame + 1][0])
                + (10 if frames[frame + 1] == "X" else get_value(frames[frame + 1][1]))
            )
        elif frames[frame][1] == "/":
            total_score += 10 + get_value(frames[frame + 1][0])
        else:
            total_score += get_value(frames[frame][0]) + get_value(frames[frame][1])

    return total_score


# Read input
input_str = input().strip()
print(calculate_bowling_score(input_str))