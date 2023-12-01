def bowling_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    is_strike = False
    is_spare = False
    for bowl in bowls:
        if bowl == 'X':
            score += 10
            if frame < 10:
                frame += 1
            if is_strike:
                score += 10
                if frame < 10:
                    frame += 1
            if is_spare:
                score += 10
            is_strike = True
            is_spare = False
        elif bowl == '/':
            score += 10 - frame_score
            if is_strike:
                score += 10
                if frame < 10:
                    frame += 1
            if is_spare:
                score += 10
            is_strike = False
            is_spare = True
        elif bowl == '-':
            if is_strike:
                score += 10
                if frame < 10:
                    frame += 1
            if is_spare:
                score += 10 - frame_score
            is_strike = False
            is_spare = False
        else:
            score += int(bowl)
            frame_score = int(bowl)
            if is_strike:
                score += int(bowl)
                if frame < 10:
                    frame += 1
            if is_spare:
                score += int(bowl)
            is_strike = False
            is_spare = False
        if frame == 10 and not is_strike and not is_spare:
            break
    return score

bowls = input()
print(bowling_score(bowls))