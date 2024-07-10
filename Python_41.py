def car_race_collision(n: int):
    collisions = 0
    for i in range(1, n + 1):
        j = n // i
        if i * j == n:
            if i != j:
                collisions += 1
            else:
                return str(collisions)
    return str(collisions)