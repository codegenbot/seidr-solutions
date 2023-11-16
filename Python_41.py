

def car_race_collision(n: int):
    """
    Imagine a road that's a perfectly straight infinitely long line.
    n cars are driving left to right;  simultaneously, a different set of n cars
    are driving right to left.   The two sets of cars start out being very far from
    each other.  All cars move in the same speed.  Two cars are said to collide
    when a car that's moving left to right hits a car that's moving right to left.
    However, the cars are infinitely sturdy and strong; as a result, they continue moving
    in their trajectory as if they did not collide.

    # YOUR CODE HERE
    from collections import defaultdict
    from collections import deque

    # Initialize the left to right cars and right to left cars.
    left_to_right_cars = defaultdict(deque)
    right_to_left_cars = defaultdict(deque)

    # Add cars to the left to right cars.
    for i in range(n):
        left_to_right_cars[i].append(i)

    # Add cars to the right to left cars.
    for i in range(n):
        right_to_left_cars[i].append(i)

    # Initialize the collision counter.
    counter = 0

    # Iterate over the cars.
    for i in range(n):
        # If the left to right car is less than the right to left car.
        if left_to_right_cars[i] < right_to_left_cars[i]:
            # Increment the counter.
            counter += 1

    # Return the counter.
    return counter


print(car_race_collision(3))

    This function outputs the number of such collisions.
    """
