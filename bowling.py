Here is the corrected code:

```
def bowling_score(frames):
    score = 0
    frame_count = 1
    last_roll = 0
    last_roll_type = 'X' if frames[0] == 'X' else '5'

    for i in range(len(frames)):
        if frames[i] == 'X':
            score += 10 + (last_roll * 2)
            frame_count -= 1
        elif frames[i] == '5':
            score += 5 + last_roll
            frame_count -= 1
        else:
            first, second = int(frames[i-1]), int(frames[i])
            if first + second == 10:
                score += 10
                frame_count -= 1
            elif first == 'X' or second == 'X':
                score += sum([int(x) for x in frames[:i]]) + (last_roll * 2)
                frame_count = 0
            else:
                score += sum([int(x) for x in frames[:i]]) + first + second
        last_roll, last_roll_type = int(frames[i]), frames[i]

    if frame_count > 1:
        score += sum([int(x) for x in frames[-frame_count:]])
    return score