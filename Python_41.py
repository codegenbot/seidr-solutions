def car_race_collision(n: int):
    collisions = 0
    for i in range(1, n + 1):
        j = (n // i) * i
        if i * j == n and i != j:
            collisions += 1
    return str(collisions)