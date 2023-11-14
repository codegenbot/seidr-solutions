

def car_race_collision(n: int):
    """
    Imagine a road that's a perfectly straight infinitely long line.
    n cars are driving left to right;  simultaneously, a different set of n cars
    are driving right to left.   The two sets of cars start out being very far from
    each other.  All cars move in the same speed.  Two cars are said to collide
    when a car that's moving left to right hits a car that's moving right to left.
    However, the cars are infinitely sturdy and strong; as a result, they continue moving
    in their trajectory as if they did not collide.

    dict_car = {}
    if n % 2 == 0:
        for i in range(1, n // 2 + 1):
            dict_car[i] = n - i
            dict_car[n - i] = i
    else:
        for i in range(1, n // 2 + 2):
            dict_car[i] = n - i
            dict_car[n - i] = i
    counter = 0
    for key in dict_car.keys():
        if key < dict_car[key]:
            counter += 1
    return counter


print(car_race_collision(1000))

    This function outputs the number of such collisions.
    """
