```
def bowling_score(frames):
    score = 0
    for i in range(len(frames)):
        if frames[i].isdigit():
            frame = int(frames[i])
            if frame == 10:
                score += 10 + next_frames_score(i)
                continue
            elif frame < 10:
                score += frame
                continue
            else:
                return "Invalid input"
        elif frames[i] == 'X':
            score += 10 + next_frames_score(i)
            continue
        else:
            strikes = 0
            for j in range(i+1, len(frames)):
                if frames[j].isdigit():
                    frame = int(frames[j])
                    if frame < 10:
                        break
                    else:
                        strikes += 1
                elif frames[j] == 'X':
                    strikes += 1
                    break
                else:
                    return "Invalid input"
            score += 10 + strikes*frame
    return score

def next_frames_score(i):
    score = 0
    for j in range(i+1, len()):
        if frames[j].isdigit():
            frame = int(frames[j])
            if frame < 10:
                score += frame
                break
            else:
                return "Invalid input"
        elif frames[j] == 'X':
            score += 10 + next_frames_score(j)
            return score
        else:
            return "Invalid input"
    return score