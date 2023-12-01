def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    spare = False
    strike = False
    for bowl in bowls:
        if bowl == 'X':
            score += 10
            if frame < 10:
                frame_score += 10
                strike = True
            else:
                frame_score += 10
        elif bowl == '/':
            score += 10 - frame_score
            if frame < 10:
                frame_score += 10 - frame_score
                spare = True
            else:
                frame_score += 10 - frame_score
        elif bowl == '-':
            if frame < 10:
                frame_score += 0
            else:
                frame_score += 0
        else:
            score += int(bowl)
            if frame < 10:
                frame_score += int(bowl)
        if frame < 10 and (strike or spare):
            if strike:
                score += int(bowl)
                frame_score += int(bowl)
                strike = False
            elif spare:
                score += int(bowl)
                frame_score += int(bowl)
                spare = False
        if frame < 10 and frame_score == 10:
            spare = True
        if frame < 10 and bowl != 'X':
            frame_score = 0
        if frame < 10 and (bowl == 'X' or bowl == '/'):
            frame += 1
    return score

bowls = input().strip()
print(calculate_bowling_score(bowls))