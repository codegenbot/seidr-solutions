def calculate_bowling_score(bowls):
    score = 0
    frames = [[] for _ in range(10)]
    frame_index = 0
    for bowl in bowls:
        if bowl == "X":
            frames[frame_index].append(10)
            frame_index += 1
        elif bowl == "/":
            frames[frame_index].append(10 - frames[frame_index][-1])
            frame_index += 1
        else:
            frames[frame_index].append(int(bowl))

    for frame in frames:
        score += sum(frame[:2])
        if len(frame) == 1 and frame_index < 9:
            if frames[frame_index + 1]:
                score += sum(frames[frame_index + 1][:2])
        elif len(frame) == 2 and sum(frame) == 10 and frame_index < 9:
            if frames[frame_index + 1]:
                score += frames[frame_index + 1][0]

    return score


bowls_input = input()
print(calculate_bowling_score(bowls_input))