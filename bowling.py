def get_bowling_score(rolls):
    # Initialize variables to keep track of the current frame and the total score
    frame = 1
    score = 0
    
    # Iterate through each roll in the input string
    for i, c in enumerate(rolls):
        # If the current roll is a strike (represented by an 'X'), award the maximum number of points
        if c == 'X':
            score += 10
        
        # If the current roll is a spare (represented by a '/'), award the maximum number of points
        elif c == '/':
            score += 10
        
        # If the current roll is a miss (represented by a '-'), do not award any points
        elif c == '-':
            pass
        
        # If we have reached the end of the frame, add the score for this frame to the total score
        if i % 2 == 1:
            score += frame
            frame += 1
    
    return score