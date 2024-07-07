def calculate_score(games):
    frames = games.replace('/', '')
    score = 0
    current_roll = 0

    for i in range(0, len(frames), 1):
        if frames[i].isdigit():
            current_roll = current_roll * 10 + int(frames[i])
        else:
            if current_roll == 10:
                score += 10
                current_roll = 0
            elif current_roll > 0:
                score += current_roll
                current_roll = 0

    return score

print(calculate_score("7/X/5/X/4/2/1/1/X"))