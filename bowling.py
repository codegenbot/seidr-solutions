# Here is the Python solution for the bowling problem:
def bowling_score(score):
    score = score.replace('/', '')
    frames = [int(x) for x in score.split()]
    total = 0
    i = 0
    while i < len(frames):
        if frames[i] == 10:
            total += frames[i]
            i += 1
        elif i + 1 < len(frames) and frames[i] + frames[i+1] >= 10:
            if frames[i+1] > 0:
                total += 10 + (frames[i+1] - 10)
            else:
                total += 10
            i += 2
        elif i == 9 or frames[i] + frames[i+1] < 10:
            total += frames[i]
            if i < len(frames) - 1 and frames[i] < 10:
                total += frames[i+1]
            i += 2
    return total