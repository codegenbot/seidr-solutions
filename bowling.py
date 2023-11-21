def calculate_score(bowls):
    frames = []
    frame = []

    for bowl in bowls:
        if bowl == '-':
            frame.append(0)
        else:
            frame.append(bowl)

        if len(frame) == 2 or frame[0] == 'X':
            frames.append(frame)
            frame = []

    score = 0
    frame_index = 0

    for i in range(len(frames)):
        frame = frames[i]
        first_bowl = frame[0]
        second_bowl = frame[1] if len(frame) > 1 else None
        third_bowl = frame[2] if len(frame) > 2 else None

        if first_bowl == 'X':
            score += 10
            if second_bowl == 'X':
                score += 10
                if third_bowl == 'X':
                    score += 10
                elif third_bowl:
                    score += int(third_bowl)
            elif second_bowl and third_bowl:
                score += int(second_bowl) + int(third_bowl)
        elif second_bowl == '/':
            score += 10
            if third_bowl == 'X':
                score += 10
            elif third_bowl:
                score += int(third_bowl)
        else:
            score += int(first_bowl) + int(second_bowl)

        frame_index += 1

    return score