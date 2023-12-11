def get_bowling_score(bowls):
    # Initialize variables
    score = 0
    strike = False
    spare = False
    frame = 1

    # Iterate through the bowls and calculate the score
    for i in range(len(bowls)):
        if bowls[i] == 'X':
            # Strike
            score += 10 + (2 if frame < 10 else 0)
            strike = True
        elif bowls[i] == '/':
            # Spare
            score += 10 + (2 if frame < 10 else 0)
            spare = True
        else:
            # Normal hit
            score += int(bowls[i])

        # Check for strike or spare bonus
        if strike or spare:
            if frame == 10:
                break
            elif bowls[i+1] == 'X':
                score += 20
            else:
                score += 10

        # Update frame and strike/spare variables
        frame += 1
        strike = False
        spare = False

    return score