def get_bowling_score(rolls):
    # Initialize variables
    score = 0
    frame = 0
    roll = 0
    spare = False
    strike = False

    while frame < 10:
        # Check for strike
        if rolls[roll] == 'X':
            score += 10
            strike = True
            roll += 1
        else:
            # Check for spare
            if rolls[roll + 1] == '/':
                score += 10
                spare = True
            else:
                score += int(rolls[roll])
            roll += 2

        # Check for bonus rolls
        if strike or spare:
            if frame < 9 and rolls[roll] == 'X':
                score += 10
                roll += 1
            elif frame < 8 and rolls[roll + 1] == '/':
                score += 10
                roll += 2

        # Move to next frame
        frame += 1

    return score