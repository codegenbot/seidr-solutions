```
def bowling_score(bowling):
    score = 0
    roll = 0
    for frame in bowling:
        if '/' in frame:
            nums = [int(x) for x in frame.split('/')]
            score += sum(nums)
            roll += len(nums)
        else:
            score += int(frame)
            roll += 1
        if roll == 10:
            break
    return score