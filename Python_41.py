def car_race_collision(n: int):
    collisions = 0
    for i in range(1, n+1):
        for j in range(i+1, n+1):
            collisions += i * j
    return collisions