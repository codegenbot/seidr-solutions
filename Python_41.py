def car_race_collision(n: int):
    total_cars = 0
    for i in range(1, n + 1):
        total_cars += i * (i + 1)
    return total_cars