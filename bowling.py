def bowling_score(frames):
    score = 0
    frame_count = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            if frame_count < 9:
                roll = [10]
                if frame_count < 8:
                    score += 20
                elif frame_count == 8 and frames[18] != 'X':
                    roll = list(map(int, [frames[2*9+1]]))
                    score += 10 + roll[0]
            else:
                roll = list(map(int, [frames[2*i+2]]))
                if roll[0] == 10:
                    score += 20
                else:
                    score += 10 + roll[0]
            frame_count += 1
        elif frames[i] == '/':
            frame_roll = list(map(int, frames[i+1].split()))
            if sum(frame_roll) == 10:
                score += 11
            else:
                score += 10 + max(frame_roll)
        else:
            frame_rolls = list(map(int, frames[i:i+2]))
            if sum(frame_rolls) == 10:
                score += 11
            else:
                score += sum(frame_rolls) + (frame_count < 9 and 1 or 0)
        frame_count += 1
    return score