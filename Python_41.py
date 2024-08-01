def car_race_collision(n: int):
    collisions = 0
    for i in range(1, n + 1):
        collisions += n - i
    return collisions