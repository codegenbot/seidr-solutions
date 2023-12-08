```
def get_bowling_score(rolls):
    # Initialize variables to keep track of the score and the current frame
    score = 0
    frame = 1
    
    # Iterate through the rolls and calculate the score for each frame
    for i in range(len(rolls)):
        # Check if the current roll is a strike
        if rolls[i] == 'X':
            # If the current roll is a strike, add 10 to the score and move on to the next frame
            score += 10
            frame += 1
        
        # Check if the current roll is a spare
        elif rolls[i] == '/':
            # If the current roll is a spare, add 10 to the score and move on to the next frame
            score += 10
            frame += 1
        
        # Check if the current roll is a normal roll
        else:
            # If the current roll is a normal roll, add its value to the score
            score += int(rolls[i])
    
    return score
```