```
import math

def dice_game(n, m):
    if n > m:
        lower_die = m
        higher_die = n
    else:
        lower_die = n
        higher_die = m
    
    equal_prob = (1/higher_die) * (1/lower_die)
    return 1 - equal_prob