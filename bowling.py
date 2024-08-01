Here is the solution:

def bowling_score(frames):
    score = 0
    for i in range(10):
        frame = frames[i*2:i*2+2]
        if frame == 'X':
            score += 30
        elif frame == '/':
            score += 20
        else:
            first_roll, second_roll = map(int, frame)
            if first_roll + second_roll == 10:
                score += first_roll + 10
            else:
                score += first_roll + second_roll
    return score