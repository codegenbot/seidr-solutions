def car_race_collision(n: int):
    total_cars = n * (n + 1) // 2
    collisions = total_cars - n
    return str(collisions)