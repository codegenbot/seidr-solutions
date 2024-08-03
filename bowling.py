```
def bowling_score(game):
    score = 0
    roll_count = 1
    prev_frame = 0
    for roll in game:
        if roll == 'X': 
            score += 10 + (10 - prev_frame)
            roll_count = 2
        elif roll == '/':
            score += 10 - prev_frame
            roll_count = 2
        else:
            strike_or_spare = int(roll[0])
            score += strike_or_spare
            if roll_count == 2:
                if strike_or_spare == 1: 
                    score += 10 + (10 - prev_frame)
                elif strike_or_spare > 1:
                    score += 10 + prev_frame
            prev_frame = strike_or_spare
        roll_count -= 1
    return score