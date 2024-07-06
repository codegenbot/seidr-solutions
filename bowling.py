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
                if frames[i] == 'X':
                    score += 10 + (9 - len(frames) // 2) * (current_roll // 2)
                    current_roll = 0
                else:
                    score += current_roll + int(frames[i])
                    current_roll = 0

    return score

print(calculate_score("1/2/3/4/5/6/7/8/9/X"))