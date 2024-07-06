def car_race_collision(n: int):
    cars = list(range(1, n + 1))
    for i in range(len(cars)):
        if i != len(cars) - 1:
            print(f"Cars {i+1} and {i+2} collided")