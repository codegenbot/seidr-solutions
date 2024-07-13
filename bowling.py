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
                    first_roll = 10 - int(frames[i+1:i+3].split('/')[0])
                    second_roll = int(frames[i+1:i+3].split('/')[0])
                    score += 10 + first_roll + second_roll
            else:
                score += 10
        elif '/' in frames[i:i+2]:
            frame_rolls = list(map(int, frames[i:i+2].split('/')))
            if sum(frame_rolls) == 10:
                score += 10
            else:
                score += sum(frame_rolls)
        else:
            score += int(frames[i])
        frame_number += 1
    return score