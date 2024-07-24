```
def bowling_score(frames):
    score = 0
    frame = 0
    while frame < len(frames):
        if frames[frame] == 'X':  # strike
            score += 10 + (10 if frame+1 < len(frames) and frames[frame+1].isdigit() else 0)
            frame += 2
        elif frames[frame:frame+2] in ['--', '-X', 'XX']:
            score += 10
            frame += 3
        elif frames[frame].isdigit():
            strike = False
            for i in range(1, 4):
                if frame+i >= len(frames) or not frames[frame+i].isdigit():
                    break
            if i == 1:
                score += int(frames[frame])
                frame += 1
            else:
                score += int(frames[frame:frame+i])
                strike = True
            if strike:
                while frame < len(frames) and (frames[frame] != '/' or not frames[frame+1].isdigit()):
                    frame += 1
        else:
            if frame < len(frames) - 2 and frames[frame:frame+3] == '/0':
                score += 10
                frame += 3
            elif frame < len(frames) - 1 and frames[frame:frame+2] == '//':
                score += 10
                frame += 2
            else:
                for i in range(1, 4):
                    if frame+i >= len(frames) or not frames[frame+i].isdigit():
                        break
                score += int(frames[frame:frame+i])
                frame += i
    return score