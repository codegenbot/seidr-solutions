def calculate_score(games):
    frames = games.replace('/', '').split('/')
    score = 0
    current_roll = 0

    for i in range(len(frames)):
        if frames[i].isdigit():
            current_roll += int(frames[i])
        else:
            if frames[i] == 'X':
                score += 10 + (10 - current_roll) if i < len(frames) - 1 else 10
            elif frames[i] == '0' and current_roll != 0:
                score += 10
            elif current_roll > 0:
                score += current_roll
            current_roll = 0

    return score

print(calculate_score("3645339/218/8-7/X71"))