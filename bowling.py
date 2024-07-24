def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            first = int(s[i])
            second = 10 - first if s[i + 1] == "/" else int(s[i + 1])
        else:
            first = 10
            second = 0
        if first + second == 10:
            score += 10 + (10 - frame) if frame < 9 else 10
            frame += 1
        elif first == 10:
            score += 10 + (10 - frame)
            frame += 1
            if second != 0:
                score += second
        else:
            score += first + second
    return score