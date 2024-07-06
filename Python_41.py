def car_race_collision(n: int):
    collisions = 0
    for i in range(1, n + 1):
        if (i * (n - i)) % 2 == 1:
            collisions += 1
    return collisions