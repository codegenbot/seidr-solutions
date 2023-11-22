def calculate_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    frame_bowls = []
    for bowl in bowls:
        if bowl == 'X':
            score += 10
            if frame < 10:
                frame_score += 10
                frame_bowls.append('X')
            else:
                frame_score += 10
                frame_bowls.append('X')
                if len(frame_bowls) == 3:
                    score += 10
                    frame_score += 10
        elif bowl == '/':
            score += 10 - int(frame_bowls[-1])
            if frame < 10:
                frame_score += 10 - int(frame_bowls[-1])
                frame_bowls.append('/')
            else:
                frame_score += 10 - int(frame_bowls[-1])
                frame_bowls.append('/')
                if len(frame_bowls) == 3:
                    score += 10 - int(frame_bowls[-2])
                    frame_score += 10 - int(frame_bowls[-2])
        elif bowl == '-':
            if frame < 10:
                frame_bowls.append('-')
            else:
                frame_bowls.append('-')
                if len(frame_bowls) == 3:
                    frame_score += 0
        else:
            score += int(bowl)
            if frame < 10:
                frame_score += int(bowl)
                frame_bowls.append(bowl)
            else:
                frame_score += int(bowl)
                frame_bowls.append(bowl)
                if len(frame_bowls) == 3:
                    score += int(bowl)
                    frame_score += int(bowl)
        if frame < 10 and (bowl == 'X' or len(frame_bowls) == 2):
            score += frame_score
            frame += 1
            frame_score = 0
            frame_bowls = []
    return score

bowls = input().strip()
print(calculate_score(bowls))