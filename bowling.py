def get_bowling_score(rolls):
    # Initialize variables
    score = 0
    frame = 0
    roll = 0
    
    # Iterate through the rolls
    for i in range(len(rolls)):
        # Check if it's a strike
        if rolls[i] == 'X':
            # Add 10 points for the strike
            score += 10
            
            # Check if there are two rolls left
            if i < len(rolls) - 2:
                # Add the next two rolls to the score
                score += int(rolls[i + 1]) + int(rolls[i + 2])
        
        # Check if it's a spare
        elif rolls[i] == '/':
            # Add 10 points for the spare
            score += 10
            
            # Check if there is one roll left
            if i < len(rolls) - 1:
                # Add the next roll to the score
                score += int(rolls[i + 1])
        
        # Check if it's a normal roll
        else:
            # Add the value of the roll to the score
            score += int(rolls[i])
    
    return score
