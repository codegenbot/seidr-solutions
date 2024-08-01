Here is the Python solution:

def bowling(score):
    score = score.replace('/', '')
    frames = [int(x) if x.isdigit() else 10 for x in score]
    total = 0
    frame = 0
    while frame < 10:
        if len(str(frames[frame])) == 1 or int(frames[frame]) == 10:
            total += frames[frame]
            frame += 1
        elif frames[frame] + frames[frame+1] <= 10:
            total += frames[frame] + frames[frame+1]
            frame += 2
        else:
            total += 10
            frame += 1
    return total