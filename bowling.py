```
def bowling_score(score):
    score = score.replace('/', '')
    total = 0
    frame = 1
    while frame <= 10:
        if len(str(score)) == 0:
            break
        if str(score)[0] in 'X':
            if len(str(score)) > 1 and str(score)[1] == 'X':
                total += 30
                score = score[2:]
            else:
                total += 10
                score = score[1:]
        elif str(score)[0].isdigit():
            strike = False
            if len(str(score)) >= 2 and str(score)[1].isdigit() and int(str(score)[0]) + int(str(score)[1]) <= 10:
                score = score[2:]
                continue
            total += int(str(score)[0])
            if len(str(score)) > 1 and str(score)[1] == 'X':
                strike = True
            elif len(str(score)) >= 2 and int(str(score)[0]) + int(str(score)[1]) <= 10:
                total += int(str(score)[0]) + int(str(score)[1])
                score = score[2:]
            else:
                total += int(str(score)[0])
                if strike:
                    score = score[1:]
                else:
                    score = score[1:]
        frame += 1
    return total