def car_race_collision(n: int) -> int:
    collisions = 0
    for i in range(1, n + 1):
        if i % 3 == 0 and i % 5 == 0:
            collisions += 1
    return collisions