```Python
def bowling_score(frames):
    frames_list = [int(x) for x in frames.replace('/', '').split()]
    score = 0

    for i, frame in enumerate(range(1, len(frames_list)+1)):
        if frame == 10:  # strike
            score += 10 + (next_frames(i+1)[0] if i < 8 else 0) + (next_frames(i+2)[0] if i < 7 and next_frames(i+1)[0] >= 5 else 0)
        elif frame == -frame:  # spare
            score += 10 + next_frames(i+1)[0]
        else:
            score += sum(frames_list[i-1:i])

    return score


def next_frames(i):
    if i < len(frames_list):
        return [frames_list[i]]
    elif i < 11:
        return [0]