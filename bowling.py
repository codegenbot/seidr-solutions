def calculate_score(games):
    frames = games.replace('/', '')
    score = 0
    current_roll = 0

    for i in range(len(frames)):
        if frames[i].isdigit():
            current_roll = current_roll * 10 + int(frames[i])
        else:
            if current_roll > 0:
                score += current_roll
            elif current_roll == 10:
                score += 10
            if frames[i] == "X":
                score += 10
            elif frames[i].isdigit():
                score += int(frames[i])
            current_roll = 0

    return score + max(0, current_roll)

print(calculate_score("3645339/218/8-7/X71"))