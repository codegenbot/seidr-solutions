def car_race_collision(n: int):
    if n <= 1:
        return 0
    collisions = 0
    for i in range(2, n):
        collisions += i
    return collisions