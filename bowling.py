```
def bowling_score(frames):
    score = 0
    frames_list = [int(x) for x in frames.split("/")]
    total_roll = 0

    for i, frame in enumerate(frames_list[:10]):
        if len(str(frame)) == 1:
            score += 10
            roll_left = 2
            while True:
                if i + roll_left < 10 and frames_list[i + roll_left] > 9:
                    score += 20
                    i, roll_left = i + roll_left, 0
                elif i + roll_left < 10:
                    score += frames_list[i + roll_left]
                    i, roll_left = i + roll_left, 0
                else:
                    break

        elif len(str(frame)) == 2:
            first_roll = int(str(frame)[0])
            second_roll = int(str(frame)[1])
            if first_roll > 9:
                score += 10 + frames_list[i+1] + frames_list[i+2]
                i += 3
            else:
                score += first_roll + second_roll

    return score