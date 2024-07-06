def bowling_score(games):
    frames = games.replace('/', '')
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
                if frames[i] == 'X':
                    current_roll = 10
                else:
                    current_roll -= int(frames[i])
                score += current_roll + (1 if current_roll < 10 else 2)
                current_roll = 0

    return score