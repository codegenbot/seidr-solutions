```
def bowling_score(score):
    score = score.replace('/', '')
    total_score = 0
    frame = 1
    for i in range(0, len(score), 2):
        if score[i].isdigit():
            strike = False
            spare = False
            if score[i] == 'X':
                strike = True
            elif score[i+1].isdigit() and int(score[i]) + int(score[i+1]) <= 10:
                spare = True
            total_score += calculate_frame(frame, score[i:i+2], strike, spare)
            frame += 1
        else:
            if score[i] == 'X':
                total_score += 10
                frame += 1
            elif score[i].isdigit() and int(score[i]) <= 10:
                total_score += int(score[i])
                frame += 1
    return total_score

def calculate_frame(frame, score, strike, spare):
    if strike:
        if frame < 9:
            return 10 + bowling_score(score[2:])
        else:
            return 10 + sum(map(int, score))
    elif spare:
        return 10 + max(map(int, score[1:]))
    else:
        return sum(map(int, score))

print(bowling_score("0"))
print(bowling_score("XXXXXXXXXXXX"))
print(bowling_score("5/5/5/5/5/5/5/5/5/5/5"))
print(bowling_score("7115XXX548/279-X53"))
print(bowling_score("532/4362X179-41447/5"))