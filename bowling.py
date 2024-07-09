def bowling_score(bowls):
    score = 0
    bowls = bowls.replace("-", "0")
    bowls = bowls.replace("X", "X/")
    frames = []
    
    i = 0
    while i < len(bowls):
        if bowls[i] == 'X':
            frames.append('X')
            i += 1
        else:
            frames.append(bowls[i:i+2])
            i += 2

    for i in range(min(10, len(frames) - 1)):
        if frames[i] == "X":
            if len(frames) > i + 2:
                score += 10 + get_value(frames[i + 1]) + get_value(frames[i + 2])
            else:
                score += 10
        else:
            score += sum(get_value(char) for char in frames[i])

    return score