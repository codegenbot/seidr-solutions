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
            frame_score += int(bowl)
            if len(frame_bowls) == 1:
                score += frame_score
                frame_score = 0
                if frame < 10:
                    frame += 1
                else:
                    frame_score += frame_score
            frame_bowls.append(bowl)
            if len(frame_bowls) == 2:
                frame_score = 0
                frame_bowls = []
    return score

bowls = input()
print(calculate_score(bowls))