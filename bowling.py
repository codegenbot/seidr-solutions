```
def bowling_score(score):
    score = score.replace('/', '')
    total = 0
    frame = 1
    next_frames_score = 0
    for i in range(0, len(score), 2):
        if score[i].isdigit():
            first_roll = int(score[i])
            second_roll = 10 - first_roll if i + 1 < len(score) and score[i+1].isdigit() else 10 - first_roll
            if first_roll == 10:
                total += 10
                frame += 1
                next_frames_score = 0
            elif second_roll == 10:
                total += second_roll
                frame += 1
                next_frames_score = 0
            else:
                total += first_roll + second_roll
                if first_roll + second_roll < 10:
                    next_frames_score = sum(map(int, score[i+2:i+min(3, len(score))].split()))
                frame += (2 if first_roll + second_roll == 10 else 1)
    return total + next_frames_score

print(bowling_score('0'))
print(bowling_score('XXXXXXXXXXXX'))
print(bowling_score('5/5/5/5/5/5/5/5/5/5/5'))
print(bowling_score('7115XXX548/279-X53'))
print(bowling_score('532/4362X179-41447/5'))