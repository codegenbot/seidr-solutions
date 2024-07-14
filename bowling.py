```
def get_next_frames_score():
    score = 0
    for i in range(1, min(3, 10 - len(str(bowling_score(""))) + 1)):
        if i < len(str(bowling_score(""))):
            score += int(str(bowling_score(""))[-i])
        else:
            break
    return score

def bowling_score(score):
    score = score.replace('/', '')
    total = 0
    frame = 1
    for i in range(0, len(score), 2):
        if score[i].isdigit():
            first_roll = int(score[i])
            second_roll = 10 - first_roll if i + 1 < len(score) and score[i+1].isdigit() else 10 - first_roll
            if first_roll == 10:
                total += 10 + (0 if frame == 9 else get_next_frames_score())
                frame += 1
            elif second_roll == 10:
                total += second_roll
                frame += 1
            else:
                total += first_roll + second_roll
                if first_roll + second_roll < 10:
                    total += get_next_frames_score()
                frame += (2 if first_roll + second_roll == 10 else 1)
    return total

print(bowling_score('0'))
print(bowling_score('XXXXXXXXXXXX'))
print(bowling_score('5/5/5/5/5/5/5/5/5/5/5'))
print(bowling_score('7115XXX548/279-X53'))
print(bowling_score('532/4362X179-41447/5'))