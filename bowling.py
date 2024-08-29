```
def bowling_score(frames):
    score = 0
    for i in range(len(frames)):
        if frames[i].isdigit():
            if frames[i] == 'X':
                score += 10 + (10 if i < 8 else 20)
            elif frames[i] == '/':
                continue
            else:
                first_roll, second_roll = map(int, frames[i].split('/'))
                if i < 9 and max(first_roll, second_roll) >= 5:
                    score += first_roll + second_roll + min(first_roll, second_roll)
                else:
                    score += first_roll + second_roll
        elif len(frames[:i].replace('X', '')) == (i+1)*10/2:
            break
    return score