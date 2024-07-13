```
def bowling_score(frames):
    score = 0
    frame_number = 1
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            if frame_number < 10:
                if frames[i+1].isdigit():
                    score += 10 + int(frames[i+1])
                else:
                    first_roll = int(frames[i+1].split('/')[0])
                    second_roll = int(frames[i+2].split('/')[1])
                    score += 10 + first_roll + second_roll
            else:
                score += 10
        elif '/' in frames[i:i+2]:
            first_roll = int(frames[i].split('/')[0])
            second_roll = int(frames[i+1].split('/')[1])
            if frame_number < 9 and first_roll + second_roll == 10:
                score += first_roll + second_roll
            else:
                score += first_roll + second_roll
        else:
            score += int(frames[i]) + int(frames[i+1])
        frame_number += 1
    return score