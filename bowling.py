```
def bowling_score(frames):
    '''Given a string representing the individual bowls in a 10-frame round of 10 pin bowling, 
    return the score of that round.
    
    For each frame, if it's not a strike (i.e., the digits are less than or equal to 2), 
    add up the number of pins knocked down. If it is a strike, add 10 points and move on. 
    If it's a spare, subtract the number of points from the previous frame from 10.
    
    Args:
        frames (str): A string representing the individual bowls in a 10-frame round 
                      of 10 pin bowling, with strikes denoted by 'X', spares denoted 
                      by '/' and normal frames denoted by two digits. 

    Returns:
        int: The total score for the given bowling game.
    '''
    score = 0
    frame = 1
    for char in frames:
        if char.isdigit():
            score += int(char)
            if frame == 10:
                break
            frame += 1
        elif char == '/':
            score += 10 - (int(frames[frames.index(char) - 1]) + int(frames[frames.index(char) + 1]))
            frame += 1
    return score