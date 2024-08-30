def bowling_score(frames):
    score = 0
    frames = [int(i) if i.isdigit() else "X" for i in frames.replace("-", "").replace("/","").split("X")]
    strike_count = 0

    for i, roll in enumerate(frames):
        if roll == "X":
            if i < 9:  
                score += 10 + frames[i+1] + frames[i+2]
            else:
                score += 10 + max(frames[:i]) 
            strike_count += 1
        elif str(roll) == "0":  
            if i < 9 and strike_count > 2:
                score += 10 + max(frames[:i]) 
            else:
                score += 10 + frames[i-1] + frames[i-2]
        elif len(str(roll)) == 2:  
            if i < 9 and strike_count > 0:
                score += 10 + roll
            else:
                score += roll + max(frames[:i])
    return score