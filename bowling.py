def get_bonus_points(bowls, prev_roll, strike, spare):
    if strike:
        # Strike bonus
        return 2 * int(prev_roll)
    elif spare:
        # Spare bonus
        return 10 + get_next_roll(bowls, i)
    else:
        # No bonus points
        return 0