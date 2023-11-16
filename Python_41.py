

def car_race_collision(n: int):
    """
    Imagine a road that's a perfectly straight infinitely long line.
    n cars are driving left to right;  simultaneously, a different set of n cars
    are driving right to left.   The two sets of cars start out being very far from
    each other.  All cars move in the same speed.  Two cars are said to collide
    when a car that's moving left to right hits a car that's moving right to left.
    However, the cars are infinitely sturdy and strong; as a result, they continue moving
    in their trajectory as if they did not collide.
    #left_right = []
    #right_left = []
    collisions = 0

    # Create input lists and calculate collisions
        # left going cars
    for x in range(0, n):
        left_right.append(x)
        if x - n in right_left:
            collisions += 1
    # right going cars
    for y in range(1, n + 1):
        right_left.append(n - y)
        if n - y - n in left_right:
            collisions += 1

    # Return number of collisions
    return collisions

    This function outputs the number of such collisions.
    """
