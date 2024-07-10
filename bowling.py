```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i] == 'X':
            score += 30
        elif '/' in frames[i]:
            parts = frames[i].split('/')
            first_roll = int(parts[0])
            second_roll = int(parts[1])
            score += first_roll + second_roll
        else:
            rolls = [int(x) for x in frames[i]]
            score += sum(rolls)
    return score