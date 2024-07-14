```
def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(0, len(frames), 2):
        if frames[i].isdigit() and frames[i+1].isdigit():
            if int(frames[i]) + int(frames[i+1]) == 10:
                if frame < 9:
                    score += 10 + get_bonus(frames[:i])
                else:
                    score += 10
                frame += 1
            elif int(frames[i]) + int(frames[i+1]) > 10:
                first_roll = int(frames[i])
                second_roll = int(frames[i+1])
                if frame < 9:
                    score += first_roll + second_roll + get_bonus(frames[:i])
                else:
                    score += first_roll + second_roll
                frame += 1
        elif frames[i] == 'X':
            score += 10
            frame += 1
        elif frames[i].isdigit() and frames[i+1] == '/':
            score += int(frames[i]) + get_bonus(frames[:i])
            frame += 1
    return score

def get_bonus(frames):
    bonus = 0
    for i in range(2, len(frames), 2):
        if frames[i-1] == 'X' or (frames[i].isdigit() and int(frames[i]) + int(frames[i+1]) > 10):
            bonus += 10
        else:
            bonus += int(frames[i-1]) + int(frames[i])
    return bonus

print(bowling_score("0"))  # 0
print(bowling_score("XXXXXXXXXXXX"))  # 300
print(bowling_score("5/5/5/5/5/5/5/5/5/5/5"))  # 150
print(bowling_score("7115XXX548/279-X53"))  # 145
print(bowling_score("532/4362X179-41447/5"))  # 100