```
def calculate_score(games):
    frames = games.replace('/', '')
    current_roll = 0
    score = 0
    roll_count = 1

    for i in range(len(frames)):
        if frames[i].isdigit():
            if roll_count == 1:
                current_roll = int(frames[i])
            else:
                current_roll += int(frames[i])

            if i < len(frames) - 1 and frames[i+1].isdigit():
                continue
            elif current_roll > 10:
                score += 10 + (current_roll - 10)
                current_roll = 0
            elif current_roll == 10:
                score += 10
            else:
                score += current_roll
            roll_count = (roll_count + 1) % 2

    return score