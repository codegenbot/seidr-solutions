def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i].isdigit():
            score += int(frames[i])
        elif frames[i] == 'X':
            score += 30
        else:
            strike_index = i
            while strike_index >= 0 and (frames[strike_index] == '/' or frames[strike_index].isdigit()):
                strike_index -= 1
            if strike_index < 0:
                score += 10 + int(frames[i])
            else:
                score += 10 + int(frames[strike_index:i+2].replace('/', ''))    
    return score