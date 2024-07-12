def bowling_score(bowls):
    score = 0
    bowl_index = 0
    
    for frame in range(10):  
        if bowls[bowl_index] == "X":  # Strike
            score += 10
            if bowls[bowl_index + 2] == "X":
                score += 10
            else:
                score += sum(map(lambda x: 10 if x == "X" else int(x) if x.isdigit() else 0, bowls[bowl_index + 1:bowl_index + 3]))
                
            bowl_index += 1
            
        elif bowls[bowl_index + 1] == "/":  # Spare
            score += 10
            score += int(bowls[bowl_index + 2]) if bowls[bowl_index + 2].isdigit() else 10
            
            bowl_index += 2
            
        else:  # Open frame
            score += int(bowls[bowl_index]) if bowls[bowl_index].isdigit() else 0
            score += int(bowls[bowl_index + 1]) if bowls[bowl_index + 1].isdigit() else 0
            
            bowl_index += 2

    return score