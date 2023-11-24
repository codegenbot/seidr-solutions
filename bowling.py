def bowling_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    spare = False
    strike = False
    for i in range(len(bowls)):
        if frame > 10:
            break
        if bowls[i] == 'X':
            score += 10
            if frame < 10:
                if bowls[i+2] == '/':
                    score += 10
                else:
                    score += get_bowl_value(bowls[i+1])
                    score += get_bowl_value(bowls[i+2])
            frame += 1
            strike = True
            frame_score = 0
        elif bowls[i] == '/':
            score += 10 - frame_score
            if frame < 10:
                score += get_bowl_value(bowls[i+1])
            frame += 1
            spare = True
            frame_score = 0
        else:
            score += get_bowl_value(bowls[i])
            frame_score += get_bowl_value(bowls[i])
            if spare:
                score += get_bowl_value(bowls[i])
                spare = False
            if strike:
                score += get_bowl_value(bowls[i])
                strike = False
            if frame_score == 10:
                spare = True
            if frame_score == 0:
                frame += 1
    return score

def get_bowl_value(bowl):
    if bowl == '-':
        return 0
    else:
        return int(bowl)