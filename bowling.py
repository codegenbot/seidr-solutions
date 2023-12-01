def calculate_score(rolls):
    score = 0
    frames = []
    for roll in rolls:
        if roll == 'X':
            frames.append(10)
        elif roll == '/':
            frames.append('/')
        else:
            frames.append(int(roll))

    i = 0
    frame = 1
    while frame <= 10:
        if frames[i] == '/':
            score += 10 + frames[i + 1]
        elif frames[i] == 10:
            score += 10 + frames[i + 1] + frames[i + 2]
            if frames[i + 1] == '/':
                score += frames[i + 2]
        else:
            score += frames[i] + frames[i + 1]
        i += 1
        frame += 1

    return score

rolls = input().strip()
print(calculate_score(rolls))