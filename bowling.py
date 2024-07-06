def calculate_score(games):
    frames = games.replace('/', '')
    current_roll = 0
    score = 0
    strike_count = 0

    for i in range(0, len(frames), 1):
        if frames[i].isdigit():
            current_roll = current_roll * 10 + int(frames[i])
        else:
            if current_roll == 10: # Spare
                score += 10
                if i < 17 and frames[i+2].isdigit(): 
                    score += int(frames[i+1]) if i+3 < len(frames) and frames[i+3].isdigit() else 0
            elif current_roll > 0:
                if strike_count: # Strike
                    score += 10 + min(10, int(frames[i])) * 2
                else:
                    score += min(10, current_roll) + (1 if current_roll < 10 else 0)
                current_roll = 0
            strike_count = 0 if frames[i] != 'X' else strike_count + 1

    return score