def get_score(bowls):
    # Initialize variables to keep track of the score and current frame
    score = 0
    frame = 1

    # Iterate through each character in the input string
    for i, char in enumerate(bowls):
        # If the character is a digit, add its value to the score
        if char.isdigit():
            score += int(char)
        # If the character is a slash, it represents a strike
        elif char == '/':
            # Add 10 points for a strike in the current frame
            score += 10
            # If the next two characters are also digits, add their value to the score
            if bowls[i+1].isdigit() and bowls[i+2].isdigit():
                score += int(bowls[i+1]) + int(bowls[i+2])
        # If the character is a dash, it represents a spare
        elif char == '-':
            # Add 10 points for a spare in the current frame
            score += 10
            # If the next character is a digit, add its value to the score
            if bowls[i+1].isdigit():
                score += int(bowls[i+1])
        # If the character is a space, it represents a miss
        elif char == ' ':
            # Add 0 points for a miss in the current frame
            score += 0

        # Increment the frame number if we reach the end of a frame
        if i % 4 == 3:
            frame += 1

    return score