

def car_race_collision(n: int):
    """
    Imagine a road that's a perfectly straight infinitely long line.
    n cars are driving left to right;  simultaneously, a different set of n cars
    are driving right to left.   The two sets of cars start out being very far from
    each other.  All cars move in the same speed.  Two cars are said to collide
    when a car that's moving left to right hits a car that's moving right to left.
    However, the cars are infinitely sturdy and strong; as a result, they continue moving
    in their trajectory as if they did not collide.

    # cars_right is a sorted array of the positions where
    # cars are coming from the right
    # cars_left is a sorted array of the positions where
    # cars are coming from the left

    test_cars_right = [4, 5, 89, 120, 0]
    test_cars_left = [-1, 2, 3, 7, 123]

    # cars_right = sorted(cars_right)
    # cars_left = sorted(cars_left)


    num_cars_right = len(test_cars_right)
    num_cars_left = len(test_cars_left)

    count = 0

    i = 0
    j = 0
    while i < num_cars_right and j < num_cars_left:
        if test_cars_right[i] > test_cars_left[j]:
            i += 1
            j += 1
            count += 1
        else:
            i += 1

    return count


# print(car_race_collision(5))









































































































    This function outputs the number of such collisions.
    """
