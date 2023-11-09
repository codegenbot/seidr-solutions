

def car_race_collision(n: int):
    """
    Imagine a road that's a perfectly straight infinitely long line.
    n cars are driving left to right;  simultaneously, a different set of n cars
    are driving right to left.   The two sets of cars start out being very far from
    each other.  All cars move in the same speed.  Two cars are said to collide
    when a car that's moving left to right hits a car that's moving right to left.
    However, the cars are infinitely sturdy and strong; as a result, they continue moving
    in their trajectory as if they did not collide.

    The cars are numbered from 0 to n-1.  The cars that drive left to right are
    numbered 0 to n/2-1.  The cars that drive right to left are numbered n/2 to n-1.
    The cars start at the following locations:
    - Cars 0 to n/2-1 start at locations -n, -n+1, ..., -1.
    - Cars n/2 to n-1 start at locations n, n-1, ..., 1.

    For example, if n=5, then the cars that drive left to right start at locations
    -5, -4, -3, -2, -1.  The cars that drive right to left start at locations
    5, 4, 3, 2, 1.

    The cars move one unit per time step.  For example, if n=5, then at time step 0,
    the cars that drive left to right are at locations -5, -4, -3, -2, -1.  The
    cars that drive right to left are at locations 5, 4, 3, 2, 1.  At time step 1,
    the cars that drive left to right are at locations -4, -3, -2, -1, 0.  The
    cars that drive right to left are at locations 4, 3, 2, 1, 0.  At time step 2,
    the cars that drive left to right are at locations -3, -2, -1, 0, 1.  The
    cars that drive right to left are at locations 3, 2, 1, 0, -1.

    This function outputs the number of such collisions.

    >>> car_race_collision(10)
    100
    >>> car_race_collision(100)
    10000
    >>> car_race_collision(1000)
    1000000
    >>> car_race_collision(10000)
    100000000

    """
    # TODO: Complete the following code.  Hint: You might want to think about a
    # data structure to store the locations of the cars.
    return n^2  # TODO: change this


    This function outputs the number of such collisions.
