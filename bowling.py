```
def get_bonus_points(bowls, prev_roll, strike, spare):
    # Check for bonus points based on current roll and previous roll
    if bowls[i] == 'X' or (prev_roll == 'X' and bowls[i] == '/'):
        # Strike bonus
        return 2 * int(bowls[i])
    elif prev_roll == '/' and bowls[i] != 'X':
        # Spare bonus
        return 10 + get_next_roll(bowls, i)
    else:
        # No bonus points
        return 0
```