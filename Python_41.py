

def car_race_collision(n: int):
    """Imagine a road that's a perfectly straight infinitely long line.
    n cars drive left to right simultaneously; a different set of n cars
    also drive right to left. All cars move at a constant speed -- half of them left to
    right and the rest right to left. They start out being very far from each other.

    Two cars are said to collide if a car that moves left to right hits a car that
    moves right to left. Cars, being infinitely sturdy and strong, continue moving
    as if they did not collide. As such, if a car drives past another, colliding at a
    single point, it counts as 1 collision.

    From this description, complete the following function signature that returns
    the number of such collisions.

    Examples:
        car_race_collision(1) returns 0


import doctest


doctest.testmod()
        car_race_collision(3) returns 3
    """
