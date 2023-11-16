

def car_race_collision(n: int, left_to_right: list, right_to_left: list) -> int:
    """
    Imagine a road that's a perfectly straight infinitely long line.
    n cars are driving left to right;  simultaneously, a different set of n cars
    are driving right to left.   The two sets of cars start out being very far from
    each other.  All cars move in the same speed.  Two cars are said to collide
    when a car that's moving left to right hits a car that's moving right to left.
    However, the cars are infinitely sturdy and strong; as a result, they continue moving
    in their trajectory as if they did not collide.


    return 0
    if len(left_to_right) != n or len(right_to_left) != n:
        return 0

    left_to_right.sort()
    right_to_left.sort()

    count = 0
    for i in range(n):
        if left_to_right[i] < right_to_left[i]:
            count += 1

    return count




    This function outputs the number of such collisions.
    """
