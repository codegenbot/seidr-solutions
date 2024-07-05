def bowling_score(frames):
    score = 0
    strike_count = 0
    spare_count = 0

    for char in frames:
        if char == 'X':
            score += 10
            strike_count += 1
        elif char.isdigit():
            if len(frames) > 1 and frames[frames.index(char)+1] == '/':
                score += 10 - int(char)
                spare_count += 1
            else:
                score += int(char)
        elif char == '-':
            if len(frames) > 2 and frames[frames.index(char)+1].isdigit():
                score += 10 - int(frames[frames.index(char)+1])
                strike_count += 1
    score += strike_count * 10 + spare_count * 10
    return score