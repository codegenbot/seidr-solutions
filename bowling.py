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
            score += 10
            if frame < 10:
                score += 10
                if is_strike:
                    score += 10
                is_spare = True
                is_strike = False
        elif bowl == '-':
            frame += 1
        else:
            score += int(bowl)
            if frame < 10:
                if is_strike:
                    score += int(bowl)
                    is_strike = False
                if is_spare:
                    score += int(bowl)
                    is_spare = False
                frame += 1

    return score

bowls = input()
print(calculate_bowling_score(bowls))