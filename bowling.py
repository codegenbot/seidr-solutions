```
def bowling_game(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i].isdigit():
            strike = False
        else:
            strike = True
        
        if strike:
            if frames[i+1].isdigit():
                score += int(frames[i+1]) * 3 + 10
            else:
                next_two_frames = int(frames[i+1:i+3])
                score += 10 + next_two_frames
        else:
            first_roll, second_roll = map(int, frames[i:i+2])
            if first_roll == 10:
                score += 10 + second_roll
            elif first_roll + second_roll < 10:
                score += first_roll + second_roll
            else:
                third_roll = int(frames[i+2])
                score += first_roll + second_roll + third_roll
                
    return score