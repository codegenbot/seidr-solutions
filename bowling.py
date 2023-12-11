def get_score(bowl_string):
    # Initialize variables
    score = 0
    is_strike = False
    is_spare = False

    # Loop through each bowl in the string
    for i, bowl in enumerate(bowl_string):
        # Check if it's a strike
        if bowl == 'X':
            score += 10
            is_strike = True
            continue

        # Check if it's a spare
        if bowl == '/':
            score += 10
            is_spare = True
            continue

        # If it's not a strike or spare, add the value to the score
        if not is_strike and not is_spare:
            score += int(bowl)

    return score