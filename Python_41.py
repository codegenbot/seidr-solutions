

def car_race_collision(n: int):
    """
    Imagine a road that's a perfectly straight infinitely long line.
    n cars are driving left to right;  simultaneously, a different set of n cars
    are driving right to left.   The two sets of cars start out being very far from
    each other.  All cars move in the same speed.  Two cars are said to collide
    when a car that's moving left to right hits a car that's moving right to left.
    However, the cars are infinitely sturdy and strong; as a result, they continue moving
    in their trajectory as if they did not collide.

    # Use the following function signature.
    # Do not change the function signature.
    # You may create additional variables as needed.

    left_to_right = []
    right_to_left = []
    collisions = 0

    for i in range(n):
        left_to_right.append(0)
        right_to_left.append(0)

    for i in range(n):
        left_to_right[i] = int(input())
        right_to_left[i] = int(input())

    left_to_right.sort()
    right_to_left.sort()

    i = 0
    j = 0

    while i < n and j < n:
        if left_to_right[i] < right_to_left[j]:
            i += 1
        else:
            collisions += i
            j += 1

    return collisions

    This function outputs the number of such collisions.
    """
