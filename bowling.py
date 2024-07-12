def bowling_score(frames):
    score = 0
    frame_count = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            if frame_count < 9:
                score += 10
                if frame_count < 8 and frames[18] != 'X' and frames[20] != '/':
                    roll = int(frames[2*i+3])
                    score += roll
            elif frame_count == 9:
                score += 10
        elif frames[i] == '/':
            spare_roll = [int(frame) for frame in frames[i+1].split()]
            if sum(spare_roll) == 10:
                score += 11
            else:
                score += 10 + max(spare_roll)
        else:
            roll = [int(frame) for frame in frames[i:i+2]]
            if sum(roll) == 10:
                score += 11
            else:
                score += sum(roll)
        frame_count += 1
    return score