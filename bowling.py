```
def get_bonus_points(bowls, prev_roll, strike, spare):
    if strike:
        # Strike bonus
        return 2 * int(prev_roll)
    elif spare:
        # Spare bonus
        return 10 + get_next_roll(bowls, i)
    elif is_10_pin_score(bowls[i]):
        # Multiple rolls after a strike or spare
        return 2 * int(prev_roll) + get_bonus_points(bowls, prev_roll, True, False)
    else:
        # No bonus points
        return 0
```