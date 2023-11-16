

def car_race_collision(n: int):
    """
    Imagine a road that's a perfectly straight infinitely long line.
    n cars are driving left to right;  simultaneously, a different set of n cars
    are driving right to left.   The two sets of cars start out being very far from
    each other.  All cars move in the same speed.  Two cars are said to collide
    when a car that's moving left to right hits a car that's moving right to left.
    However, the cars are infinitely sturdy and strong; as a result, they continue moving
    in their trajectory as if they did not collide.

    # The following two arrays contain
    # the starting positions of the cars
    # driving left to right and right to left
    # respectively.
    start_left_to_right = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    start_right_to_left = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]

    # The following two arrays contain
    # the ending positions of the cars
    # driving left to right and right to left
    # respectively.
    end_left_to_right = [11, 12, 13, 14, 15, 16, 17, 18, 19, 20]
    end_right_to_left = [0, -1, -2, -3, -4, -5, -6, -7, -8, -9]

    This function outputs the number of such collisions.
    """
