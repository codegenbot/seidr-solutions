def calculate_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    frame_bowls = []
    for bowl in bowls:
        if bowl == 'X':
            score += 10
            if frame < 10:
                frame += 1
            else:
                frame_score += 10
        elif bowl == '/':
            score += 10 - int(frame_bowls[-1])
            if frame < 10:
                frame += 1
            else:
                frame_score += 10 - int(frame_bowls[-1])
        elif bowl == '-':
            if frame < 10:
                frame += 1
            else:
                frame_score += 0
        else:
            score += int(bowl)
            if frame < 10:
                frame_score += int(bowl)
            else:
                frame_score += int(bowl)
        frame_bowls.append(bowl)
        if frame_score == 10 and len(frame_bowls) == 2:
            frame_score = 0
            frame_bowls = []
        if len(frame_bowls) == 2:
            frame_score = 0
            frame_bowls = []
    return score

bowls = input()
print(calculate_score(bowls))