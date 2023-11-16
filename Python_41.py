

def car_race_collision(n: int):
    """
    Imagine a road that's a perfectly straight infinitely long line.
    n cars are driving left to right;  simultaneously, a different set of n cars
    are driving right to left.   The two sets of cars start out being very far from
    each other.  All cars move in the same speed.  Two cars are said to collide
    when a car that's moving left to right hits a car that's moving right to left.
    However, the cars are infinitely sturdy and strong; as a result, they continue moving
    in their trajectory as if they did not collide.

    # Your solution goes here:


if __name__ == "__main__":
    print(car_race_collision(1) == 0)
    # print(car_race_collision(2) == 1)
    # print(car_race_collision(3) == 3)
    # print(car_race_collision(4) == 6)
    # print(car_race_collision(5) == 10)
    # print(car_race_collision(6) == 15)
    # print(car_race_collision(7) == 21)
    # print(car_race_collision(8) == 28)
    # print(car_race_collision(9) == 36)
    # print(car_race_collision(10) == 45)

    This function outputs the number of such collisions.
    """
