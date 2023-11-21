def calculate_score(bowls):
    score = 0
    frames = []
    i = 0
    while i < len(bowls):
        if bowls[i] == 'X':
            frames.append(10)
            i += 1
        elif bowls[i] == '/':
            frames.append(10 - frames[-1])
            i += 1
        else:
            frames.append(int(bowls[i]))
        i += 1

    for i in range(10):
        if frames[i] == 10:
            score += 10 + frames[i+1] + frames[i+2]
        elif frames[i] + frames[i+1] == 10:
            score += 10 + frames[i+2]
        else:
            score += frames[i] + frames[i+1]
    return score

bowls = input()
print(calculate_score(bowls))