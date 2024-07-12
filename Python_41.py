def car_race_collision(n: int):
    if n < 2:
        return 0
    collisions = 0
    for i in range(1, n):
        collisions += i
    return collisions