def get_bowling_score(game):
    # Initialize variables to keep track of the score and current frame
    score = 0
    frame = 1

    # Iterate through each character in the game string
    for i, char in enumerate(game):
        # If the character is a digit, add its value to the score
        if char.isdigit():
            score += int(char)
        # If the character is a slash, it indicates a strike or spare
        elif char == '/':
            # If the previous character was a digit, this is a strike
            if game[i-1].isdigit():
                score += 10 + int(game[i+1])
            # If the previous two characters were digits, this is a spare
            elif game[i-2].isdigit() and game[i-1].isdigit():
                score += 10 + int(game[i+1])
        # If the character is a dash, it indicates a miss
        elif char == '-':
            score += 0

    return score