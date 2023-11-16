
from math import ceil

def car_race_collision(n: int):
    """
    Imagine a road that's a perfectly straight infinitely long line.
    n cars are driving left to right;  simultaneously, a different set of n cars
    are driving right to left.   The two sets of cars start out being very far from
    each other.  All cars move in the same speed.  Two cars are said to collide
    when a car that's moving left to right hits a car that's moving right to left.
    However, the cars are infinitely sturdy and strong; as a result, they continue moving
    in their trajectory as if they did not collide.
    # We take the observation that two cars moving in opposite directions
    # crash when their positions are the same.  To account for upper bound,
    # we floor all cars to the value of the greatest common divisor.
    # Think of the case where n=2, all cars are going in the same direction,
    # so we should expect to never collide

    while n % 16 == 0: n /= 16
    while n % 9 == 0: n /= 9
    while n % 8 == 0: n /= 8
    while n % 7 == 0: n /= 7
    while n % 5 == 0: n /= 5
    while n % 4 == 0: n /= 4
    while n % 3 == 0: n /= 3
    while n % 2 == 0: n /= 2

    if n == 1:  # powers of 2, so we take floor of n/2
        number_of_collisions = n // 2
    else:
        number_of_collisions = n

    This function outputs the number of such collisions.
    """
