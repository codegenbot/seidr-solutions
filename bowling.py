```
def calculate_score(games):
    frames = games.replace('/', '')
    score = 0
    roll = 0

    for i in range(0, len(frames), 2):
        if frames[i].isdigit():
            first_roll = int(frames[i])
            second_roll = int(frames[i+1]) if (i + 1) < len(frames) and frames[i+1].isdigit() else 10 - first_roll
            roll = first_roll + second_roll
            if roll == 10:
                score += 10
            elif roll > 10:
                score += 10
                for j in range(i + 2, min(i + 3, len(frames))):
                    score += int(frames[j])
        else:
            score += roll
            roll = 0

    return score