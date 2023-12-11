def get_bowling_score(input_string):
    # Initialize variables
    score = 0
    frame_number = 1
    is_strike = False
    is_spare = False

    # Loop through each character in the input string
    for char in input_string:
        # If the current character is a digit, add its value to the score
        if char.isdigit():
            score += int(char)
        # If the current character is a slash, it means we are starting a new frame
        elif char == '/':
            frame_number += 1
            is_strike = False
            is_spare = False
        # If the current character is an X, it means we have a strike
        elif char == 'X':
            is_strike = True
            score += 10
        # If the current character is a -, it means we have a spare
        elif char == '-':
            is_spare = True
            score += 10
        # If the current character is a space, it means we are at the end of the round
        elif char == ' ':
            break

    return score