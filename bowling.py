def get_bonus_points(bowls, prev_roll, strike, spare):
    if strike and not spare:
        # Strike bonus
        return 2 * int(prev_roll)
    elif spare and not strike:
        # Spare bonus
        return 10 + get_next_roll(bowls, i)
    elif strike and spare:
        # Both strike and spare, return the sum of the two rolls as bonus points
        return int(prev_roll) + get_next_roll(bowls, i)
    else:
        # No bonus points
        return 0