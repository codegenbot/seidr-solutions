
import random

def car_race_collision(n: int):
    """
    Imagine a road that's a perfectly straight infinitely long line.
    n cars are driving left to right;  simultaneously, a different set of n cars
    are driving right to left.   The two sets of cars start out being very far from
    each other.  All cars move in the same speed.  Two cars are said to collide
    when a car that's moving left to right hits a car that's moving right to left.
    However, the cars are infinitely sturdy and strong; as a result, they continue moving
    in their trajectory as if they did not collide.

    # Your code goes here.
    left_to_right = []
    right_to_left = []
    for i in range(n):
        left_to_right.append(random.randint(1, n))
        right_to_left.append(random.randint(1, n))
    left_to_right.sort()
    right_to_left.sort()
    i = 0
    j = 0
    collisions = 0
    while i < n and j < n:
        if left_to_right[i] < right_to_left[j]:
            collisions += n - j
            i += 1
        else:
            j += 1
    return collisions


print(car_race_collision(10))
    # You may use any data structure you like.

    return 0

    This function outputs the number of such collisions.
    """
