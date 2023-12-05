def get_bonus_points(bowls, prev_roll, strike, spare):
    if spare:
        # Spare bonus
        return 10 + get_next_roll(bowls, i)
    elif strike:
        # Strike bonus
        return 2 * int(prev_roll)
    else:
        # No bonus points
        return 0