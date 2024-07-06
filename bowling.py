```
def calculate_score(games):
    frames = games.replace('/', '')
    current_roll = 0
    score = 0

    for i in range(0, len(frames), 1):
        if frames[i].isdigit():
            current_roll = int(frames[i])
        else:
            if current_roll == 10:
                score += 10
                current_roll = 0
            elif current_roll > 0:
                score += current_roll
                current_roll = 0
        for j in range(1,3):
            if i+j < len(frames) and frames[i+j].isdigit():
                current_roll += int(frames[i+j])
                break

    return score