```
def calculate_score(games):
    frames = games.replace('/', '')
    score = 0
    current_roll = 0

    for i in range(0, len(frames), 2):
        if frames[i].isdigit():
            current_roll = int(frames[i])
        else:
            if current_roll > 0:
                if current_roll == 10: # spare
                    score += 10 + int(frames[i+1]) + (10 - int(frames[i+1])) * 2
                elif current_roll < 10: # normal roll
                    score += current_roll + int(frames[i+1])
                current_roll = 0
        if i >= 9:
            break

    return score

print(calculate_score("3645339/218/8-7/X71"))