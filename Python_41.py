

class Car(object):
    def __init__(self, position, velocity, direction, index):
        """

        :type x: int
        :type y: int
        :type velocity: int
        :type direction: str
        """
        self.position = position
        self.velocity = velocity
        self.direction = direction
        self.index = index

    def __repr__(self):
        return f"Car({self.index},{self.position},{self.direction})"


class MovingVehicle(Car):
    def move(self, unit):
        self.position += unit * self.velocity * (
            1 if self.direction.lower() == "right" else -1
        )


class Speed:
    def __init__(self):
        self.value = 1


def _get_collision_count(cars):
    dummy_cars = cars + []
    cars = sorted(cars, key=lambda x: (x.velocity, x.position))
    dummy_cars = sorted(dummy_cars, key=lambda x: (x.position, x.velocity))
    cars_seen = set()
    collisions = 0
    while cars:
        car = cars.pop(0)
        cars_seen.add(car)
        dummy_car = dummy_cars.pop(0)
        dummy_car.move(1)
        car.move(1)

        if car.position < dummy_car.position:
            dummy_cars.append(dummy_car)
            cars.append(car)
            continue
        else:
            if car in cars_seen:
                continue
            car_index = dummy_cars.index(car)
            car_collisions = car_index
            collisions += car_collisions
            dummy_cars = dummy_cars[: car_index] + dummy_cars[car_index + 1 :]
    return collisions


def _get_collisions(cars):
    cars = cars + []
    if len(cars) <= 1:
        return 0
    car_master = cars.pop()
    collisions = 0
    while cars:
        car = cars.pop(0)
        car_master.move(1)
        if (
            car_master.position < car.position
            and car_master.position + 1 > car.position
        ):
            collisions += 1
    return collisions


def _get_collision2(cars):
    dummy_cars = cars
    cars = sorted(cars, key=lambda x: (x.position, x.velocity))
    cars_seen = set()
    collisions = 0
    while cars:
        car = cars.pop(0)
        dummy_car = dummy_cars.pop(0)
        dummy_car.move(1)
        car.move(1)
        cars_seen.add(car)
        if car.position < dummy_car.position:
            break
        else:
            if car in cars_seen:
                continue
            car_index = dummy_cars.index(car)
            car_collisions = car_index
            collisions += car_collisions
            dummy_cars = dummy_cars[: car_index] + dummy_cars[car_index + 1 :]
    return collisions


def car_race_collision(N: int):
    """
    Imagine a road that's a perfectly straight infinitely long line.
    n cars are driving left to right;  simultaneously, a different set of n cars
    are driving right to left.   The two sets of cars start out being very far from
    each other.  All cars move in the same speed.  Two cars are said to collide
    when a car that's moving left to right hits a car that's moving right to left.
    However, the cars are infinitely sturdy and strong; as a result, they continue moving
    in their trajectory as if they did not collide.
    # wrong
    speed = Speed()
    cars_left = []
    cars_right = []
    for i in range(1, N + 1):
        cars_left.append(
            Car(i, i * speed.value, "LEFT", i)
        )  # initial pos, velocity = car_index * speed
        cars_right.append(Car(i, i * speed.value, "RIGHT", i))
    collisions = 0
    while cars_left and cars_right:
        car_l = cars_left.pop(0)
        car_r = cars_right.pop(0)
        car_l.move(1)
        car_r.move(1)
        if car_l.position < car_r.position:
            cars_left.append(car_l)
            cars_right.append(car_r)
        else:
            collisions += 1
    return collisions


if __name__ == "__main__":
    cars = [
        Car(5, 2, "right", 1),
        Car(1, 1, "left", 2),
        Car(1, 1, "right", 3),
        Car(1, 2, "right", 4),
    ]
    collision_count = _get_collisions(cars)
    print(collision_count)

    This function outputs the number of such collisions.
    """
