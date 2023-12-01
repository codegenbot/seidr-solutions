def calculate_score(bowls):
    score = 0
    frame = 0
    frame_count = 0
    bowl_count = 0
    frames = [[] for _ in range(10)]

    for bowl in bowls:
        if bowl == "X":
            frames[frame].append(10)
            frame_count += 1
            bowl_count = 0
            frame += 1
        elif bowl == "/":
            frames[frame].append(10 - frames[frame][-1])
            frame_count += 1
            bowl_count = 0
            frame += 1
        elif bowl == "-":
            frames[frame].append(0)
            bowl_count += 1
        else:
            frames[frame].append(int(bowl))
            bowl_count += 1

        if frame_count == 10:
            break

    for frame in frames:
        score += sum(frame[:2])

        if len(frame) == 3:
            score += frame[2]

        if frame_count > 0 and sum(frame[:2]) == 10:
            if frame[0] == 10:
                score += frames[frame + 1][0]

            if len(frame) == 3 and frame[1] == 10:
                score += frame[2]

        frame_count -= 1

    return score

bowls = input()
print(calculate_score(bowls))