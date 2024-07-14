```
def get_next_frames_score(score):
    score = score.replace('/', '')
    total = 0
    for i in range(1, min(3, len(score))):
        if i < len(score):
            total += int(score[-i])
        else:
            break
    return total

def bowling_score(score):
    score = score.replace('/', '')
    total = 0
    frame = 1
    for i in range(0, len(score), 2):
        if score[i].isdigit():
            first_roll = int(score[i])
            second_roll = 10 - first_roll if i + 1 < len(score) and score[i+1].isdigit() else 10 - first_roll
            if first_roll == 10:
                total += 10 + (0 if frame == 9 else get_next_frames_score(str(total)))
                frame += 1
            elif second_roll == 10:
                total += second_roll
                frame += 1
            else:
                total += first_roll + second_roll
                if first_roll + second_roll < 10:
                    total += get_next_frames_score(str(total))
                frame += (2 if first_roll + second_roll == 10 else 1)
    return total

print(bowling_score('0'))
print(bowling_score('XXXXXXXXXXXX'))
print(bowling_score('5/5/5/5/5/5/5/5/5/5/5'))
print(bowling_score('7115XXX548/279-X53'))
print(bowling_score('532/4362X179-41447/5'))