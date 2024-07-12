# Here is the Python solution for the bowling problem:
def bowling_score(score):
    score = score.replace('/', '')
    frames = [int(x) if x != 'X' else 10 for x in score]
    bonus_frames = []
    total = 0
    i = 0
    while i < len(frames):
        if frames[i] == 10:
            total += frames[i]
            i += 1
        elif i + 1 < len(frames) and frames[i] + frames[i+1] >= 10:
            if frames[i] == 10:
                bonus_frames.append(10)
                i += 1
            else:
                bonus_frames.append(frames[i] + frames[i+1])
                i += 2
        else:
            total += frames[i]
            if i + 1 < len(frames):
                total += frames[i+1]
            i += 2
    for j in range(len(bonus_frames)):
        if bonus_frames[j] == 10:
            if j + 1 < len(bonus_frames):
                total += bonus_frames[j] + bonus_frames[j+1]
            else:
                total += bonus_frames[j]
        else:
            total += bonus_frames[j] + frames[j+1]
    return total