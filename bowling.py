```
def bowling_score(frames):
    score = 0
    for frame in frames.split('/'):
        if len(frame) == 2 and int(frame) == 10:
            strike = True
        elif '-' in frame:
            strike = True
            spare = False
        else:
            strike = False
            spare = False
        if strike:
            score += 10 + (10 - roll_count()) * 10
        elif len(roll) == 1 and int(frame) == 10 - roll[0]:
            score += 10 + roll[0]
        else:
            score += sum(map(int, map(str.split('/'))[0]))
        if strike or spare:
            roll = []
        else:
            roll.append(int(frame))
    return score

def roll_count():
    count = 0
    for frame in frames.split('/'):
        if '-' in frame:
            count += 1
        elif int(frame) == 10:
            count += 2
        else:
            count += 1
        break
    return count