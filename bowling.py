def bowling_score(frames):
    score = 0
    frame_count = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            if frame_count < 9:
                roll = [int(frame) for frame in [frames[2*i+1]]]
                if sum(roll) == 10:
                    score += 20
                else:
                    score += 10 + max(roll)
            elif frame_count == 9 and frames[18] != 'X':
                roll = [int(frame) for frame in [frames[19]]]
                score += 10 + sum(roll)
            frame_count += 1
        elif frames[i] == '/':
            frame_roll = [int(frame) for frame in frames[i+1].split()]
            if sum(frame_roll) == 10:
                score += 11
            else:
                score += 10 + max(frame_roll)
        else:
            frame_rolls = [int(frame) for frame in frames[i:i+2]]
            if sum(frame_rolls) == 10:
                score += 11
            else:
                score += sum(frame_rolls)
        frame_count += 1
    return score