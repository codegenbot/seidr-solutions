```
def bowling_score(frames):
    score = 0
    frame = 1
    i = 0
    while i < len(frames):
        if frames[i].isdigit():
            first_roll = int(frames[i])
            i += 1
            if i < len(frames) and frames[i].isdigit():
                second_roll = int(frames[i])
                i += 1
                if first_roll + second_roll == 10:
                    score += 10
                else:
                    score += first_roll + second_roll
            elif first_roll == 10:
                score += 10
                frame += 1
                i += 1
            else:
                while i < len(frames) and frames[i] != '/':
                    if not frames[i].isdigit():
                        return -1
                    score += int(frames[i])
                    i += 1
                if i + 1 < len(frames):
                    bonus = 10 - sum(map(int, frames[i-7:i]))
                    score += bonus
                frame += 1
        elif frames[i] == '/':
            if i > 0 and not frames[i-1].isdigit():
                return -1
            if int(frames[:i]) < 10:
                score += 10 - (10 - sum(map(int, frames[:i])))
            else:
                score += 10
            frame += 1
        i += 1
    return score