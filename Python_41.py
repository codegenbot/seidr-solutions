def car_race_collision(n: int):
    """
    Given a number n of cars in a circle, calculate the number of possible collisions.
    Each car can collide with at most one other car.
    :param n: The number of cars in the circle.
    :return: The number of possible collisions.
    """
    return (n * (n - 1)) // 2