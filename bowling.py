def bowling_score(frames):
    score = 0
    frames_list = [list(map(int, frame.split('-'))) for frame in frames.replace('/', '-').split('-')]
    for i in range(len(frames_list)):
        if len(frames_list[i]) == 1:
            if i < 9: 
                score += sum(frames_list[:i+2])
            else: 
                score += 10 + sum(frames_list[i:])
        elif len(frames_list[i]) > 1 and frames_list[i][0] != 10:
            score += sum(frames_list[i]) + (10 - frames_list[i][0] - frames_list[i][1])
        elif len(frames_list[i]) == 2: 
            score += sum(frames_list[i]) + (10 - frames_list[i][0] - frames_list[i][1])
    return score