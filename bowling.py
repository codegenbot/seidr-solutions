def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    frame_score = []
    for i in range(len(bowls)):
        if bowls[i] == 'X':
            score += 10
            if frame < 10:
                frame_score.append(10)
            else:
                frame_score.append(10)
                if len(frame_score) == 3:
                    score += 10
        elif bowls[i] == '/':
            score += 10 - int(bowls[i-1])
            if frame < 10:
                frame_score.append(10 - int(bowls[i-1]))
            else:
                frame_score.append(10 - int(bowls[i-1]))
                if len(frame_score) == 3:
                    score += 10 - int(bowls[i-1])
        elif bowls[i] == '-':
            if frame < 10:
                frame_score.append(0)
            else:
                frame_score.append(0)
                if len(frame_score) == 3:
                    score += 0
        else:
            score += int(bowls[i])
            if frame < 10:
                frame_score.append(int(bowls[i]))
            else:
                frame_score.append(int(bowls[i]))
                if len(frame_score) == 3:
                    score += int(bowls[i])
        if frame < 10 and (len(frame_score) == 2 or bowls[i] == 'X'):
            frame += 1
            score += sum(frame_score)
            frame_score = []
        elif frame == 10 and len(frame_score) == 3:
            score += sum(frame_score)
            frame_score = []
    return score