def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[2 * i] == 'X':
            score += 10
            if i < 9:
                frame = frames[2 * (i + 1):2 * (i + 3)]
                if '/' not in frame and all(str.isdigit(x) for x in frame):
                    score += sum(map(int, frame))
        elif frames[2 * i] == '-':
            continue
        elif "/" in frames[2 * i:2 * i + 1]:
            first_roll = int(frames[2 * i : 2 * i].replace("/", ""))
            second_roll = int(frames[2 * i:2 * i + 1].replace("/", ""))
            score += min(first_roll, second_roll) + max(0, first_roll + second_roll - 10)
        else:
            first_roll = int(frames[2 * i : 2 * (i + 1)])
            if frames[2 * (i + 1):] == '/':
                second_roll = 10 - first_roll
            elif '/' not in frames[2 * (i + 1):] and all(str.isdigit(x) for x in frames[2 * (i + 1):]):
                second_roll = int(frames[2 * (i + 1):])
            score += first_roll + second_roll
    return score