

def car_race_collision(n: int):
    """
    Imagine a road that's a perfectly straight infinitely long line.
    n cars are driving left to right;  simultaneously, a different set of n cars
    are driving right to left.   The two sets of cars start out being very far from
    each other.  All cars move in the same speed.  Two cars are said to collide
    when a car that's moving left to right hits a car that's moving right to left.
    However, the cars are infinitely sturdy and strong; as a result, they continue moving
    in their trajectory as if they did not collide.
    # TODO: Complete the following code given the task description and function signature.
    # You may add additional helper functions.
    # You may not use any other libraries.
    # You may not use any mutable data structures.

    # The following is a sample solution.
    # It's not the only solution.
    # You may come up with a different solution.
    # If you do, please share it with us.
    return n * (n - 1)

    This function outputs the number of such collisions.
    """
