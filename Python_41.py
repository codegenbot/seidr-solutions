

def car_race_collision(n: int):
    """
    Imagine a road that's a perfectly straight infinitely long line.
    n cars are driving left to right;  simultaneously, a different set of n cars
    are driving right to left.   The two sets of cars start out being very far from
    each other.  All cars move in the same speed.  Two cars are said to collide
    when a car that's moving left to right hits a car that's moving right to left.
    However, the cars are infinitely sturdy and strong; as a result, they continue moving
    in their trajectory as if they did not collide.
    # In this problem, we can think of cars as points on the x-axis,
    # and we can think of them moving to the right as having a positive
    # y-coordinate, and moving to the left as having a negative y-coordinate.
    #
    # Cars that are moving to the right have a positive y-coordinate,
    # and cars that are moving to the left have a negative y-coordinate.
    #
    # We can represent all cars as a list of (x, y) pairs.  For example,
    # if there are n = 3 cars, moving left to right, and n = 3 cars,
    # moving right to left, we can represent them as follows:
    #
    # [ (1, 1), (2, 1), (3, 1), (1, -1), (2, -1), (3, -1) ]
    #
    # which means the following:
    #
    # Car #1 that's moving left to right is at x = 1
    # Car #2 that's moving left to right is at x = 2
    # Car #3 that's moving left to right is at x = 3
    # Car #1 that's moving right to left is at x = 1
    # Car #2 that's moving right to left is at x = 2
    # Car #3 that's moving right to left is at x = 3
    #
    # For example, the following would mean that the cars in the first
    # set are driving left to right at x = 1, x = 2, and x = 4, and the
    # cars in the second set are driving right to left at x = 1, x = 4,
    # and x = 5.
    #
    # [ (1, 1), (2, 1), (4, 1), (1, -1), (4, -1), (5, -1) ]
    #
    # Using this representation, we can answer the question of whether
    # two cars collide in constant time.  If two (x, y) pairs have the
    # same x coordinate, then the cars collide.
    #
    # For example, the following would mean that the cars in the first
    # set are driving left to right at x = 1, x = 2, and x = 4, and the
    # cars in the second set are driving right to left at x = 1, x = 2,
    # and x = 5.
    #
    # [ (1, 1), (2, 1), (4, 1), (1, -1), (2, -1), (5, -1) ]
    #
    # In this case, the cars at x = 1 and x = 2 would collide.
    #
    # Write code below that will count the number of collisions given
    # a list of (x, y) pairs.
    #
    # In this case, it should return 2.
    num_collisions = 0
    return num_collisions

    This function outputs the number of such collisions.
    """
