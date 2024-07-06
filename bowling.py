def calculate_score(games):
    frames = games.replace("/", "")
    current_roll = 0
    score = 0

    for i in range(len(frames)):
        if frames[i].isdigit():
            current_roll = current_roll * 10 + int(frames[i])
        else:
            if current_roll == 10:
                score += 10
                current_roll = 0
            elif current_roll > 0:
                score += min(current_roll, 10) + (1 if frames[i] == "X" else 1)
                current_roll = 0

    return score