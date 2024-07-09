```
def bowling_score(frames):
    score = 0
    frame_index = 1
    for frame in frames.split('/'):
        if len(frame) == 1:
            score += 10
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if first_roll + second_roll == 10:
                score += 10
            else:
                score += first_roll + second_roll
        else:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            third_roll = int(frame[2])
            if frame_index < 9 and first_roll + second_roll == 10:
                if len(frames.split('/')[frame_index+1]) == 1:
                    score += 10
                else:
                    next_two_rolls = [int(x) for x in frames.split('/')[frame_index+1].split('-')]
                    score += 10 + sum(next_two_rolls[:2])
            elif frame_index < 9 and first_roll + second_roll + third_roll == 10:
                if len(frames.split('/')[frame_index+1]) == 1:
                    score += 5
                else:
                    next_roll = int(frames.split('/')[frame_index+1].split('-')[0])
                    score += 5 + next_roll
            else:
                score += first_roll + second_roll + third_roll
        frame_index += 1
    return score