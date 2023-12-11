
import re
def get_score(bowl_string):
    # Initialize variables
    score = 0
    current_frame = 1
    previous_roll = None
    
    # Iterate through the bowl string
    for roll in re.findall(r'\d+', bowl_string):
        # Check if it's a strike
        if roll == 'X':
            score += 10 + int(previous_roll)
            previous_roll = None
        # Check if it's a spare
        elif roll == '/':
            score += 10 + int(previous_roll[1:])
            previous_roll = None
        else:
            score += int(roll)
        
        # Check if we've reached the end of the frame
        if current_frame == 10:
            break
    
    return score
```