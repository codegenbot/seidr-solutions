```
def bowling_score(score):
    frames = score.split('/')
    total_score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            total_score += 30
        elif frames[i].isdigit():
            strike = int(frames[i])
            if i < len(frames) - 1 and frames[i+1].isdigit():
                spare = int(frames[i+1])
                total_score += strike + spare
            else:
                total_score += strike
        else:
            frame = [int(x) for x in frames[i]]
            if sum(frame) == 10:
                total_score += sum(frame)
            elif len(frame) > 1 and sum(frame) < 10:
                total_score += 10 + sum(frame[1:])
            else:
                total_score += sum(frame)
    return total_score