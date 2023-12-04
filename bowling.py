def get_score(bowls):
    # Initialize variables
    score = 0
    strike = False
    spare = False
    prev_roll = None

    # Iterate through the bowls and calculate the score
    for i, roll in enumerate(bowls):
        if roll == "X":
            # Strike
            score += 10 + get_next_two_rolls(bowls, i)
            strike = True
        elif roll == "/":
            # Spare
            score += 10 + get_next_roll(bowls, i)
            spare = True
        else:
            # Normal roll
            score += int(roll)

        # Check for bonus points
        if strike or spare:
            # Add bonus points
            score += get_bonus_points(bowls, prev_roll, strike, spare)

            # Reset variables
            strike = False
            spare = False
            prev_roll = None
        else:
            prev_roll = roll

    return score

def get_next_two_rolls(bowls, i):
    # Get the next two rolls after a strike
    if i + 2 < len(bowls) and bowls[i + 1] == "X" and bowls[i + 2] != "/":
        return int(bowls[i + 1]) + int(bowls[i + 2])
    else:
        return 0

def get_next_roll(bowls, i):
    # Get the next roll after a spare
    if i + 1 < len(bowls) and bowls[i + 1] != "/":
        return int(bowls[i + 1])
    else:
        return 0

def get_bonus_points(bowls, prev_roll, strike, spare):
    # Check for bonus points
    if strike and not spare:
        # Strike bonus
        return 2 * int(prev_roll)
    elif spare and not strike:
        # Spare bonus
        return 10 + get_next_roll(bowls, i)
    else:
        # No bonus points
        return 0
```