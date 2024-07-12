''' 
def bowling_score(frames):
    frames = [list(map(int, frame.split())) for frame in frames.replace('/', ' ').split()]
    score = 0
    previous_rolls = 0
    for i in range(10):
        if len(frames[i]) == 1:
            score += 10
        elif len(frames[i]) == 2:
            if frames[i][0] + frames[i][1] == 10:
                score += 10
            else:
                score += sum(frames[i])
        else:
            first_roll = frames[i][0]
            second_roll = frames[i][1]
            third_roll = frames[i][2]
            if first_roll + second_roll == 10:
                score += 10 + third_roll
            elif second_roll + third_roll == 10:
                score += 10 + first_roll - previous_rolls
            else:
                score += sum(frames[i])
        previous_rolls = sum(frames[i-1]) if i > 0 and len(frames[i-1]) >= 2 else 0
    return score