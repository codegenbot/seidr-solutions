

def car_race_collision(n: int):
    """
    Imagine a road that's a perfectly straight infinitely long line.
    n cars are driving left to right;  simultaneously, a different set of n cars
    are driving right to left.   The two sets of cars start out being very far from
    each other.  All cars move in the same speed.  Two cars are said to collide
    when a car that's moving left to right hits a car that's moving right to left.
    However, the cars are infinitely sturdy and strong; as a result, they continue moving
    in their trajectory as if they did not collide.
    def check_collision(car1, car2):
        if car1[1] < car2[1]:
            return True
        return False

    left_cars = sorted(map(int, input().split()))
    right_cars = sorted(map(int, input().split()))
    right_cars = [[val, i] for i, val in enumerate(right_cars)]

    collisions = 0
    for i, car1 in enumerate(left_cars):
        for car2 in right_cars:
            if check_collision(car1, car2):
                collisions += 1
                right_cars.remove(car2)
                break

    return collisions


if __name__ == '__main__':
    n = int(input())
    print(car_race_collision(n))

    This function outputs the number of such collisions.
    """
