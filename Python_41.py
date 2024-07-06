def car_race_collision(n: int):
    cars_in_front = 0
    for i in range(1, n+1):
        if (n - i) % ((i % 2) + 1) == 0:
            cars_in_front += 1
    return cars_in_front