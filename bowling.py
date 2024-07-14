def bowling_score(frames):
    score = 0
    frame_index = 0
    for i in range(1, 11):
        if frames[frame_index] == "X":
            score += 10 + (10 - i) * 10
            frame_index += 1
        elif frames[frame_index : frame_index + 2].isdigit():
            strike = False
            if frames[frame_index : frame_index + 2][0] == "/":
                strike = True
                frame_index += 3
            else:
                frame_index += 2
            if strike:
                score += int(frames[frame_index - 2 : frame_index]) + 10
            else:
                score += sum(int(x) for x in frames[frame_index - 2 : frame_index])
        else:
            raise ValueError("Invalid input")
    return score