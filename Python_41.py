def car_race_collision(n: int, m: int):
    if n < m:
        total_collisions = sum([i * (i - 1) for i in range(1, m + 1)])
        return total_collisions
    else:
        total_collisions = sum([j * (j - 1) for j in range(1, min(m, n) + 1)])
        return total_collisions