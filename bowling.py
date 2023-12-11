def get_score(bowls):
    # Initialize variables to keep track of the score
    score = 0
    strike = False
    spare = False
    frame = 1

    # Iterate through each bowl in the string
    for i, bowl in enumerate(bowls):
        # If the current bowl is a strike
        if bowl == 'X':
            # If this is the last frame and there is no spare, add 30 points to the score
            if i == len(bowls) - 1:
                score += 30
            # Otherwise, set the strike flag to True and move on to the next bowl
            else:
                strike = True
                continue
        # If the current bowl is a spare
        elif bowl == '/':
            # If this is the last frame and there is no strike, add 10 points to the score
            if i == len(bowls) - 1:
                score += 10
            # Otherwise, set the spare flag to True and move on to the next bowl
            else:
                spare = True
                continue
        # If the current bowl is a number, add its value to the score
        else:
            score += int(bowl)

        # If this is the last frame, return the final score
        if i == len(bowls) - 1:
            return score

        # If there was a strike in the previous bowl, add the value of the current bowl to the score
        if strike:
            score += int(bowls[i + 1])
            strike = False
            continue

        # If there was a spare in the previous two bowls, add the value of the current bowl to the score
        if spare and i > 1 and bowls[i - 2] == '/':
            score += int(bowls[i + 1])
            spare = False
            continue

    # If we reach this point, it means that there were no strikes or spares in the last frame, so return the final score
    return score