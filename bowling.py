```
def get_bonus_points(bowls):
    bonus = 0
    for i in range(len(bowls)):
        if bowls[i] == '-':
            # Strike bonus
            bonus += 2 * int(prev_roll)
        elif bowls[i+1] == '/':
            # Spare bonus
            bonus += 10 + get_next_roll(bowls, i)
    return bonus
```