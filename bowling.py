def bowling_score(frames):
    score = 0
    frame_count = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 10
            if frame_count < 9:
                roll = int(frames[2*i+1])
                score += roll
            frame_count += 1
        elif frames[i] == '/':
            spare_roll = [int(frame) for frame in frames[i+1].split()]
            score += 10 + max(spare_roll)
            frame_count += 1
        else:
            roll = [int(frame) for frame in frames[i:i+2]]
            if sum(roll) == 10:
                score += 11
            else:
                score += sum(roll)
            frame_count += 1
    return score