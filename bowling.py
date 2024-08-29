```
def bowling_game(score_string):
    frames = [list(map(int, list(filter(str.isdigit, frame)))) for frame in re.split('[-\/X]', score_string)]
    total_score = 0
    frame_num = 1
    for i in range(len(frames)):
        if len(frames[i]) == 2 and max(frames[i]):
            if frames[i][0] + frames[i][1] < 10:
                total_score += max(frames[i])
            else:
                total_score += 10
        elif len(frames[i]) == 1:
            total_score += frames[i][0]
        else:
            strike = 10 - frames[i-1][0]
            if i > 1 and frames[i-2].count(10):
                total_score += strike + max(frames[i])
            else:
                total_score += strike
        frame_num += 1
    return total_score