def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    is_strike = False
    is_spare = False

    for bowl in bowls:
        if bowl == 'X':
            score += 10
            if frame < 10:
                score += 10
                if is_strike:
                    score += 10
                if is_spare:
                    score += 10
                    is_spare = False
                is_strike = True
        elif bowl == '/':
            score += 10 - frame_score
            if frame < 10:
                score += 10 - frame_score
                if is_strike:
                    score += 10
                is_spare = True
                is_strike = False
        elif bowl == '-':
            pass
        else:
            score += int(bowl)
            if frame < 10:
                if is_strike:
                    score += int(bowl)
                    is_strike = False
                if is_spare:
                    score += int(bowl)
                    is_spare = False
                if is_strike or is_spare:
                    frame += 1
                if is_strike:
                    is_strike = False
                elif is_spare:
                    is_spare = False
                else:
                    if frame < 10:
                        frame += 1

    return score

bowls = input()
print(calculate_bowling_score(bowls))