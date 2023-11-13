

def car_race_collision(n: int):
    """
    Imagine a road that's a perfectly straight infinitely long line.
    n cars are driving left to right;  simultaneously, a different set of n cars
    are driving right to left.   The two sets of cars start out being very far from
    each other.  All cars move in the same speed.  Two cars are said to collide
    when a car that's moving left to right hits a car that's moving right to left.
    However, the cars are infinitely sturdy and strong; as a result, they continue moving
    in their trajectory as if they did not collide.
    left_to_right = []
    right_to_left = []
    for i in range(n):
        left_to_right.append(i)
        right_to_left.append(i)

    left_to_right.sort()
    right_to_left.sort(reverse=True)

    collisions = 0
    while len(left_to_right) > 0 and len(right_to_left) > 0:
        if left_to_right[0] < right_to_left[0]:
            collisions += len(right_to_left)
            left_to_right.pop(0)
        else:
            right_to_left.pop(0)

    return collisions


print(car_race_collision(10))

    This function outputs the number of such collisions.
    """
