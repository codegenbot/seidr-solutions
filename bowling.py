```
def calculate_score(games):
    frames = games.replace('/', '')
    current_roll = 0
    score = 0
    roll_count = 1
    previous_roll = 0

    for i in range(len(frames)):
        if frames[i].isdigit():
            current_roll = int(frames[i])
        else:
            if current_roll + 1 == 10 and 'X' != frames[i]:
                score += 10
                roll_count = 2
                current_roll = 0
            elif previous_roll > 0:
                if roll_count == 2 and 1 <= previous_roll <= 9:
                    score += 10 + previous_roll
                else:
                    score += previous_roll + current_roll
                current_roll = 0
                roll_count = 1
            previous_roll = current_roll
            current_roll = 0

    if current_roll > 0 or (roll_count == 2 and previous_roll > 0):
        if current_roll + previous_roll <= 10:
            score += current_roll + previous_roll
        else:
            score += 10 + previous_roll - 10
    return score