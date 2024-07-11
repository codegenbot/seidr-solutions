```Python
def bowling_score(bowling):
    score = 0
    frame = 1
    i = 0
    while i < len(bowling):
        if bowling[i] == "X":
            if frame < 10:
                score += 30
                frame += 1
            else:
                score += 10
            i += 1
        elif bowling[i].isdigit():
            j = i + 1
            while j < len(bowling) and bowling[j].isdigit():
                j += 1
            if int(bowling[i:j]) == 10:
                if frame < 10:
                    score += 20
                    frame += 1
                else:
                    score += 10
            elif int(bowling[i]) + int(bowling[i+1]) <= 10:
                score += int(bowling[i]) + int(bowling[i+1])
                if frame < 10:
                    frame += 1
                i = j - 1
            else:
                score += int(bowling[i])
                if frame < 10:
                    frame += 1
                i = j - 1
        else:
            if frame < 10:
                score += 10
                frame += 1
            i += 1
    return score