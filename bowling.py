def get_bowling_score(rolls):
    # Initialize variables
    score = 0
    strike = False
    spare = False
    roll_index = 0

    # Iterate through the rolls and calculate the score
    while roll_index < len(rolls):
        # Check for strike
        if rolls[roll_index] == 'X':
            score += 10 + rolls[roll_index + 1] + rolls[roll_index + 2]
            strike = True
            roll_index += 1
        # Check for spare
        elif rolls[roll_index] == '/':
            score += 10 + rolls[roll_index + 1]
            spare = True
            roll_index += 1
        # Add the score for the current roll
        else:
            score += int(rolls[roll_index])

        # Increment the roll index
        roll_index += 1

    # Return the final score
    return score