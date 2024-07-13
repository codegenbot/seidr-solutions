```
def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            if frame < 10:
                score += 10
                if frames[i+1].isdigit():
                    score += int(frames[i+1])
                else:
                    first_roll = int(frames[i+1][0])
                    second_roll = int(frames[i+2])
                    score += 10 + second_roll
            else:
                score += 10
        elif '/' in frames[i:i+2]:
            frame_score = list(map(int, frames[i:i+2].split('/')))
            if sum(frame_score) == 10:
                score += 10
            else:
                score += sum(frame_score)
        else:
            first_roll = int(frames[i])
            second_roll = int(frames[i+1])
            if frame < 5 and first_roll + second_roll == 10:
                score += 10
            else:
                score += first_roll + second_roll
        frame += 1
    return score