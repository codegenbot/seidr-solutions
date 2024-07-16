```
def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(0, len(frames), 2):
        if frames[i].isdigit() and frames[i+1].isdigit():
            strike = False
            spare = False
            total_pins = int(frames[i]) + int(frames[i+1])
            if total_pins == 10:
                strike = True
            elif total_pins < 10:
                spare = True
            while frame <= 10 and (strike or spare):
                if strike:
                    score += 10
                    frame += 1
                    strike = False
                elif spare:
                    score += 10
                    frame += 1
                    spare = False
                else:
                    if int(frames[i]) == 10:
                        score += 10
                        frame += 1
                    else:
                        score += min(int(frames[i]), 10) + min(int(frames[i+1]), 10)
                        frame += 2
    return score