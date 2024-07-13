def bowling_score(frames):
    score = 0
    frame_number = 1
    for i in range(len(frames)):
        if frames[i] == 'X':
            if frame_number < 10:
                score += 10
                if frame_number < 9 and frames[i+2].split('/')[0] == 'X' or frames[i+3].split('/')[0] == 'X':
                    score += 10
                else:
                    score += int(frames[i+1])
            elif frame_number == 10:
                score += 10
        elif '/' in frames[i:i+2]:
            frame = list(map(int, frames[i:i+2].split('/')))
            if sum(frame) == 10:
                score += 10
            else:
                score += sum(frame)
            frame_number += 1
        else:
            score += int(frames[i])
            frame_number += 1
    return score