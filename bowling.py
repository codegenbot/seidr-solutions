def calculate_score(games):
    frames = games.replace('/', '')
    score = 0

    for i in range(0, len(frames), 2):
        if frames[i].isdigit():
            current_roll = int(frames[i])
            if i < len(frames) - 1 and frames[i+1] == 'X':
                score += 10 + (10 - current_roll)
        elif frames[i] == 'X':
            score += 10
            if len(frames) > i + 1 and frames[i+1].isdigit():
                score += int(frames[i+1])
        else:
            current_roll = int(frames[i]) + int(frames[i+1])
            score += current_roll

    return score