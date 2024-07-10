def car_race_collision(n: int):
    collisions = 0
    for i in range(1, n // 2 + 1):
        for j in range(i, (n - i) // 2 + 1):
            if i * j == n:
                collisions += 1
    return str(collisions)