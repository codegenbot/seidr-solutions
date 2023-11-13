

def car_race_collision(n: int):
    """
    Imagine a road that's a perfectly straight infinitely long line.
    n cars are driving left to right;  simultaneously, a different set of n cars
    are driving right to left.   The two sets of cars start out being very far from
    each other.  All cars move in the same speed.  Two cars are said to collide
    when a car that's moving left to right hits a car that's moving right to left.
    However, the cars are infinitely sturdy and strong; as a result, they continue moving
    in their trajectory as if they did not collide.
    cars_left = [0] * n
    cars_right = [0] * n
    collisions = 0
    for i in range(n):
        cars_left[i] = int(input())
    for i in range(n):
        cars_right[i] = int(input())
    cars_left.sort()
    cars_right.sort()
    for i in range(n):
        if cars_left[i] == cars_right[i]:
            collisions += 1
    return collisions

    This function outputs the number of such collisions.
    """
