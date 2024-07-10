def car_race_collision(n: int):
    collisions = 0
    for i in range(1, n // 2 + 1):
        j = (n - i * i) ** 0.5
        if round(j) == j:
            if i * int(j) == n:
                collisions += 1
    return str(collisions)