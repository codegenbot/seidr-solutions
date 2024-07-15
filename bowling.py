```
def bowling_score(frames):
    score = 0
    roll = 0
    frames_list = [int(x) for x in frames.replace('/', '').split()]

    for i, frame in enumerate(frames_list[:10]):
        if frame == 10:
            score += 10
            roll += 1
            if i < 8:
                next_frame = frames_list[i + 1] + frames_list[i + 2]
                score += next_frame * 2
        elif len(str(frame)) == 1 or (len(str(frame)) == 2 and int(str(frame)[0]) + int(str(frame)[1]) < 11):
            if roll == 0:
                score += frame * 10
                roll = 2
            else:
                score += frame
                roll -= 1
        elif len(str(frame)) == 2:
            first_roll = int(str(frame)[0])
            second_roll = int(str(frame)[1])
            if first_roll + second_roll < 11:
                score += frame
                roll = 2
            else:
                score += first_roll + second_roll
                roll -= 1

    if roll > 0:
        score += 10 * (roll - 1)

    return score