```
def bowling_score(frames):
    frames = [int(x) if x.isdigit() else x for x in frames]
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 10
            if i + 1 < len(frames) and frames[i + 1] == "X":
                score += 10
            elif i + 1 < len(frames):
                score += int(frames[i + 1]) * 2
        elif frames[i] == "/":
            if i + 2 < len(frames):
                score += 10 + int(frames[i + 1]) + int(frames[i + 2]) // 2
            else:
                score += 10
        else:
            first_roll = int(frames[i])
            if i + 1 < len(frames) and frames[i + 1] == "X":
                score += first_roll + 10
            elif i + 1 < len(frames):
                second_roll = int(frames[i + 1])
                score += first_roll + second_roll
        elif frames[i] > '0':
            if i + 2 < len(frames) and frames[i + 1] == "X" and int(frames[i]) + 10 == int(frames[i+1]):
                score += 10 + int(frames[i + 2])
            else:
                first_roll = int(frames[i])
                second_roll = int(frames[i + 1])
                third_roll = int(frames[i + 2])
                score += first_roll + second_roll + third_roll
        i += 1
    return score