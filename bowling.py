```
def bowling_score(s):
    score = 0
    frames = s.split('/')
    for i in range(len(frames)):
        frame = frames[i]
        if 'X' in frame:
            if i == len(frames) - 1:
                score += 10 + 10
            else:
                score += 10 + int(frame.replace('X', '')) * 2
        elif '-' in frame:
            parts = frame.split('-')
            first_roll = int(parts[0])
            second_roll = int(parts[1])
            if first_roll == 10:
                score += 10 + second_roll
            else:
                score += first_roll + second_roll
        else:
            rolls = [int(x) for x in frame]
            score += sum(rolls)
    return score

print(bowling_score("X1-1681357-0/XX7/4"))