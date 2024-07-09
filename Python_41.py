def car_race_collision(cars, max_speed):
    n = min(cars, int(max_speed**1.5))
    if cars > n:
        return n * (n - 1) // 2 + (cars - n) * (max_speed - 1)
    else:
        return n * (n - 1) // 2