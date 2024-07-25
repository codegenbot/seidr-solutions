```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i].isdigit():
            strike = False
            if i == len(frames) - 1:
                continue
            frame_score = int(frames[i])
            if frames[i+1] == 'X':
                strike = True
            elif frames[i+1].isdigit():
                frame_score += int(frames[i+1])
        else:
            first_roll = int(frames[i])
            second_roll = int(frames[i+1])
            frame_score = first_roll + second_roll
        if strike:
            score += 10 + frame_score
        else:
            score += frame_score
    return score