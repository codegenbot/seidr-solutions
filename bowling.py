def bowling_score(bowling):
    score = 0
    frame = 1
    for i in range(len(bowling)):
        if bowling[i] == "X":
            score += 10
            if frame < 9:
                if bowling[i + 1].isdigit() and bowling[i + 2].isdigit():
                    score += int(bowling[i + 1]) + int(bowling[i + 2])
                else:
                    score += 10
            frame += 1
        elif bowling[i] == "/":
            first_roll = 10 - int(bowling[i - 1])
            second_roll = int(bowling[i + 1])
            score += first_roll + second_roll
            frame += 1
        else:
            if bowling[i].isdigit():
                score += int(bowling[i])
                if frame < 9 and bowling[i + 2].isdigit() and bowling[i + 3].isdigit():
                    score += int(bowling[i + 1]) + int(bowling[i + 2])
                frame += 1 if bowling[i + 1] != "0" else 0
    return score