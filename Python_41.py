

def car_race_collision(n: int):
    """
    Imagine a road that's a perfectly straight infinitely long line.
    n cars are driving left to right;  simultaneously, a different set of n cars
    are driving right to left.   The two sets of cars start out being very far from
    each other.  All cars move in the same speed.  Two cars are said to collide
    when a car that's moving left to right hits a car that's moving right to left.
    However, the cars are infinitely sturdy and strong; as a result, they continue moving
    in their trajectory as if they did not collide.

    lefts = []
    rights = []

    for _ in range(n):
        lefts.append(int(input()))
        rights.append(int(input()))

    lefts = sorted(lefts)
    rights = sorted(rights)

    count = 0
    i, j = 0, 0
    while i < n and j < n:
        if lefts[i] < rights[j]:
            count += j
            i += 1
        else:
            j += 1
    return count

    This function outputs the number of such collisions.
    """
