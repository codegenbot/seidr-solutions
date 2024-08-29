"""
def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i] == 'X':
            if i < 9:
                score += 30
            else:
                score += 10 + int(frames[9].replace('X', '')) + int(frames[9].replace('/x', '').replace('/', '').strip())
        elif frames[i].isdigit():
            score += int(frames[i])
        else:
            first_roll, second_roll = map(int, frames[i].split('/'))
            if i < 8 and first_roll + second_roll == 10:
                try:
                    third_roll = int(frames[i+1].replace('X', ''))
                    score += 20
                except:
                    score += first_roll + second_roll
            else:
                score += first_roll + second_roll
    return score