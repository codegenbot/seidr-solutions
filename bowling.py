def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    is_strike = False
    is_spare = False
    frame_score = 0

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
                frame += 1
            else:
                is_strike = False
                is_spare = False
        elif bowl == '/':
            score += 10 - frame_score
            if frame < 10:
                score += 10 - frame_score
                if is_strike:
                    score += 10
                is_spare = True
                frame += 1
            else:
                is_strike = False
                is_spare = False
        elif bowl == '-':
            pass
        else:
            score += int(bowl)
            frame_score = int(bowl)
            if frame < 10:
                if is_strike:
                    score += int(bowl)
                    is_strike = False
                    frame += 1
                if is_spare:
                    score += int(bowl)
                    is_spare = False
                    frame += 1

    return score

bowls = input()
print(calculate_bowling_score(bowls))