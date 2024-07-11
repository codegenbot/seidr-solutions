def bowling_score(bowling):
    score = 0
    frame = 1
    for i in range(len(bowling)):
        if bowling[i] == "X":
            score += 30
            frame += 1
        elif bowling[i].isdigit():
            if int(bowling[i]) == 10:
                score += 20
                frame += 1
            else:
                strike = False
                for j in range(i + 1, len(bowling)):
                    if bowling[j] == "X":
                        strike = True
                        break
                    elif bowling[j].isdigit():
                        if int(bowling[j]) + int(bowling[i]) <= 10:
                            score += int(bowling[i]) + int(bowling[j])
                            frame += 1
                            i = j - 1
                            break
                if strike:
                    score += 20
                    frame += 1
        else:
            for j in range(i + 1, len(bowling)):
                if bowling[j] == "X":
                    score += 10 + int(bowling[i])
                    frame += 1
                    i = j - 1
                    break
                elif bowling[j].isdigit():
                    if int(bowling[j]) + int(bowling[i]) <= 10:
                        score += int(bowling[i]) + int(bowling[j])
                        frame += 1
                        i = j - 1
                        break
    return score