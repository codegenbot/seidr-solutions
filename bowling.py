def bowling_score(frames):
    score = 0
    for i in range(10):
        parts = frames[i * 2 : i * 2 + 2].split("/")
        if len(parts) == 1 or (parts[0] == 'X' and parts[1] == ''):
            score += 10
        elif '/' in parts:
            score += 20
        else:
            for part in parts:
                score += int(part)
    return score