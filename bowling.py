```
def bowling_score(frames):
    score = 0
    frame_index = 0
    for _ in range(10):
        if frames[frame_index] == 'X':
            score += 30
            frame_index += 1
        elif frames[frame_index: frame_index + 2].endswith('/'):
            first_roll, second_roll = map(int, frames[frame_index: frame_index + 2].split('/'))
            score += first_roll + second_roll
            frame_index += 2
        else:
            first_roll = int(frames[frame_index])
            if first_roll == 10:
                score += 10 + int(frames[frame_index + 1: frame_index + 3].split('/')[0]) + int(frames[frame_index + 1: frame_index + 3].split('/')[1])
                frame_index += 3
            else:
                score += first_roll
                second_roll = int(frames[frame_index + 1])
                if second_roll + first_roll == 10:
                    score += 10
                else:
                    score += second_roll
                frame_index += 2
    return score