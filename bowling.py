```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == 'X':
            score += 30
            i += 1
            if i < len(frames) and frames[i] == 'X':
                score += 30
                i += 1
            elif i < len(frames):
                if ''.join(c for c in frames[i].replace(" ", "") if c.isdigit()):
                    score += int(''.join(c for c in frames[i].replace(" ", "") if c.isdigit()))
                i += 1
        elif frames[i] == '/':
            score += 10
            i += 1
            if i < len(frames) and ''.join(c for c in frames[i].replace(" ", "") if c.isdigit()):
                score += int(''.join(c for c in frames[i].replace(" ", "") if c.isdigit()))
                i += 1
        else:
            first_roll = int(''.join(c for c in frames[i].replace(" ", "") if c.isdigit()))
            if i < len(frames) - 1 and frames[i+1] == 'X':
                second_roll = 10
                score += first_roll + second_roll
                i += 2
            elif i < len(frames) - 1:
                if ''.join(c for c in frames[i+1].replace(" ", "") if c.isdigit()):
                    second_roll = int(''.join(c for c in frames[i+1].replace(" ", "") if c.isdigit()))
                    score += first_roll + second_roll
                    i += 2
                elif len(frames[i+1].replace(" ", "")) == 0: 
                    if i < len(frames) - 2 and frames[i+2] == 'X':
                        score += first_roll + 30
                        i += 3
                    else:
                        score += first_roll + 10
                        i += 2
                else: 
                    if i < len(frames) - 1 and frames[i+1].replace(" ", "") == '0':
                        score += first_roll + 10
                        i += 2
                    else:
                        score += first_roll + int(''.join(c for c in frames[i+1].replace(" ", "") if c.isdigit()))
                        i += 2
    return score

print(bowling_score("X|X|7/4|5|6|8-3|9-0|10|-5|-10|-"))