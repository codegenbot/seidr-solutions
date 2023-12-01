def bowling(score_string):
    score = 0
    frame = 1
    i = 0
    while frame <= 10:
        if score_string[i] == 'X':
            score += 10
            if i + 2 < len(score_string):
                if score_string[i + 2] == 'X':
                    score += 10
                elif score_string[i + 2] == '/':
                    score += 10 - int(score_string[i + 1])
                else:
                    score += int(score_string[i + 1]) + int(score_string[i + 2])
            frame += 1
            i += 1
        elif score_string[i] == '/':
            score += 10 - int(score_string[i - 1])
            if i + 1 < len(score_string):
                if score_string[i + 1] == 'X':
                    score += 10
                else:
                    score += int(score_string[i + 1])
            frame += 1
            i += 1
        else:
            score += int(score_string[i])
            frame += 1
        i += 1
    return score

score_string = input()
print(bowling(score_string))