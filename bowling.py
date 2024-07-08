def bowling_score(bowls):
    score = 0
    bowls = bowls.replace("-", "0")
    bowls = bowls.replace("X", "X/")
    frames = bowls.split("/")
    
    for i in range(min(10, len(frames))):
        if frames[i] == "X":
            score += 10 + get_value(frames[i + 1]) + get_value(frames[i + 2])
        else:
            score += get_value(frames[i][0]) + get_value(frames[i][1])
            if len(frames[i]) == 3:
                score += get_value(frames[i][2])
    
    return score