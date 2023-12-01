def bowling(string):
    score = 0
    frames = []
    for char in string:
        if char == 'X':
            frames.append(10)
        elif char == '/':
            frames.append(10 - frames[-1])
        elif char == '-':
            frames.append(0)
        else:
            frames.append(int(char))

    for i in range(10):
        if frames[i] == 10:
            score += 10 + frames[i+1] + frames[i+2]
        elif frames[i] + frames[i+1] == 10:
            score += 10 + frames[i+2]
        else:
            score += frames[i] + frames[i+1]

    return score