Here is the solution:

def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i]:
            frame_parts = [int(x) for x in frames[i].split('/')]
            if len(frame_parts) == 2:
                score += sum(frame_parts)
            else:
                score += max(frame_parts) + 10
        else:
            score += int(frames[i])
    return score