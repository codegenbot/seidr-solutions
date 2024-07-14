```
def bowling_score(score):
    score = score.replace('/', '')
    total = 0
    frame = 1
    framescores = []
    for i in range(0, len(score), 2):
        if score[i].isdigit():
            first_roll = int(score[i])
            second_roll = 10 - first_roll if i + 1 < len(score) and score[i+1].isdigit() else 10 - first_roll
            if first_roll == 10:
                total += 10
                framescores.append(10)
                frame += 1
            elif second_roll == 10:
                total += second_roll
                framescores.append(second_roll)
                frame += 1
            else:
                total += first_roll + second_roll
                if first_roll + second_roll < 10:
                    next_frame = int(score[i+2:i+4]) if i+2 < len(score) and score[i+2].isdigit() and score[i+3].isdigit() else 0
                    if next_frame > 0:
                        total += next_frame
                        framescores.append(next_frame)
                frame += (2 if first_roll + second_roll == 10 else 1)
    for i in range(frame, 10):
        total += int(framescores[i-1])
    return total

print(bowling_score('0'))
print(bowling_score('XXXXXXXXXXXX'))
print(bowling_score('5/5/5/5/5/5/5/5/5/5/5'))
print(bowling_score('7115XXX548/279-X53'))
print(bowling_score('532/4362X179-41447/5'))