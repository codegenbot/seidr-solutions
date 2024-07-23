```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 30 + int(frames[i+1].replace('/',''))
        elif '/' in frames[i]:
            first_roll, second_roll = map(int, frames[i].split('/'))
            score += first_roll + second_roll
        else:
            score += int(frames[i])
    return score