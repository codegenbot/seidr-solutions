```
def bowling_score(score):
    score = score.replace('/', '')
    total = 0
    frame = 1
    i = 0
    while i < len(score):
        if score[i].isdigit():
            first_roll = int(score[i])
            i += 1
            if i < len(score) and score[i].isdigit():
                second_roll = int(score[i])
                i += 1
                if first_roll + second_roll == 10:
                    total += 10
                else:
                    total += first_roll + second_roll
                frame += (2 if first_roll + second_roll == 10 else 1)
            elif first_roll == 10:
                total += 10
                frame += 1
                i += 1
            else:
                while i < len(score) and score[i].isdigit():
                    total += int(score[i])
                    i += 1
                if i < len(score) and score[i] == 'X':
                    total += 10
                    frame += 1
                    i += 1
                elif i < len(score):
                    total += 10 - int(score[i-1])
                    frame += 1
                    i += 1
        else:
            if score[i] == 'X':
                total += 10
                frame += 1
                i += 1
            else:
                total += 10 - int(score[i-1])
                frame += 1
                i += 1
    return total

print(bowling_score('0'))
print(bowling_score('XXXXXXXXXXXX'))
print(bowling_score('5/5/5/5/5/5/5/5/5/5/5'))
print(bowling_score('7115XXX548/279-X53'))
print(bowling_score('532/4362X179-41447/5'))