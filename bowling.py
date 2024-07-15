```
def bowling_score(frames):
    frames_list = [int(x) for x in frames.replace('/', '-').split('-')]

    score = 0
    roll = 0

    for i, frame in enumerate(frames_list[:10]):
        if len(str(frame)) == 1:
            score += frame
            if i < 9 and (i == 7 or sum([int(x) for x in str(frames_list[i+2])])) > 10:
                roll = 0
        else:
            first_roll = int(str(frame)[0])
            second_roll = int(str(frame)[1])
            score += (first_roll + (second_roll if first_roll + second_roll <= 10 else second_roll - 10))
    return score