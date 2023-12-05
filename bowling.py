```
def get_bonus_points(bowls, prev_roll, strike, spare):
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
```
def get_bonus_points(bowls, prev_roll, strike, spare):
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
```
def get_bonus_points(bowls, prev_roll, strike, spare):
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
It looks like there is an indentation error on line 1 of your program. The first line of Python code should be indented four spaces, but it appears to have only one space. To fix this issue, you can simply add three more spaces to the beginning of that line so that it is indented correctly.