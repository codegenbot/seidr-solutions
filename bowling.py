def bowling_score(frames):
    score = 0
    frame_count = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 10 + (10 if frame_count < 8 else 0)
            frame_count += 1
        elif frames[i] == '/':
            frame_roll = list(map(int, frames[i+1].split()))
            if sum(frame_roll) == 10:
                score += 11
            else:
                score += 10 + max(frame_roll)
        else:
            frame_rolls = list(map(int, frames[i:i+2]))
            score += sum(frame_rolls) + (frame_count < 9 and 1 or 0)
        frame_count += 1
    return score