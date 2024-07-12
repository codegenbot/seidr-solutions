def bowling_score(frames):
    frames = [list(map(int, frame.split())) for frame in frames.replace('/', ' ').split()]
    score = 0
    previous_rolls = 0
    spare_count = 0
    strike_count = 0
    
    for i in range(10):
        if len(frames[i]) == 1:
            score += 10
            strike_count += 1
        elif len(frames[i]) == 2:
            if sum(frames[i]) == 10:
                score += 10
                spare_count += 1
            else:
                score += sum(frames[i])
        else:
            first_roll = frames[i][0]
            second_roll = frames[i][1]
            third_roll = frames[i][2]
            
            if first_roll + second_roll == 10:
                score += 10
                if strike_count > 0:
                    score += previous_rolls - first_roll
                    strike_count -= 1
                elif spare_count > 0:
                    score += 4
                    spare_count -= 1
                else:
                    score += third_roll
            elif second_roll + third_roll == 10:
                score += 10
                if strike_count > 0:
                    score += previous_rolls - first_roll
                    strike_count -= 1
                elif spare_count > 0:
                    score += 4
                    spare_count -= 1
                else:
                    score += first_roll - second_roll
            else:
                score += sum(frames[i])
        previous_rolls = sum(frames[i]) if i > 0 and len(frames[i-1]) >= 2 else 0
    
    return score