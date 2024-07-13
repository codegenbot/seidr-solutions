```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit() and s[i+1].isdigit():
            strike = False
            spare = False
            if s[i] == 'X':
                strike = True
            elif int(s[i:i+2]) < 10:
                spare = True
            score += 10
            if strike:
                score += bowling_score_one_frame(s[i+2:]) + 10
            elif spare:
                score += bowling_score_one_frame(s[i+2:]) + 1
        else:
            score += int(s[i:i+2])
        frame += 1
    return score

def bowling_score_one_frame(s):
    if len(s) == 3:
        return 10
    elif s[0] == 'X':
        return 10 + bowling_score_one_frame(s[1:])
    elif s[:1].isdigit():
        return int(s[:2]) + bowling_score_one_frame(s[2:])
    else:
        return int(s[:1]) + int(s[1:])

print(bowling_score("0"))
print(bowling_score("XXXXXXXXXXXX"))
print(bowling_score("5/5/5/5/5/5/5/5/5/5/5"))
print(bowling_score("7115XXX548/279-X53"))
print(bowling_score("532/4362X179-41447/5"))