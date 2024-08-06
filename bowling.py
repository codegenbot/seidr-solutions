```
def bowling_game(s):
    score = 0
    roll = 0
    frames = s.split('/')
    
    for frame in frames:
        if len(frame) == 1:
            score += 10
        elif frame[0] == 'X':
            score += 10 + 10 - int(frame[1])
            roll += 2
        else:
            first_roll, second_roll = map(int, frame)
            if first_roll == 10:
                score += 10 + second_roll
            else:
                score += first_roll + second_roll
            roll += 2
        
        if roll < 20:
            continue
        roll = 0
    
    return score