

def car_race_collision(n: int):
    """
    Imagine a road that's a perfectly straight infinitely long line.
    n cars are driving left to right;  simultaneously, a different set of n cars
    are driving right to left.   The two sets of cars start out being very far from
    each other.  All cars move in the same speed.  Two cars are said to collide
    when a car that's moving left to right hits a car that's moving right to left.
    However, the cars are infinitely sturdy and strong; as a result, they continue moving
    in their trajectory as if they did not collide.
    if n <= 0:
        return 0
    left_cars = [i for i in range(n)]
    right_cars = [i for i in range(2 * n - 1, n - 1, -1)]
    collision_counter = 0
    while left_cars and right_cars:
        left_car = left_cars.pop(0)
        right_car = right_cars.pop(0)
        if left_car < right_car:
            left_cars.append(left_car)
        else:
            collision_counter += 1

    return collision_counter


# print(car_race_collision(10))

    This function outputs the number of such collisions.
    """
