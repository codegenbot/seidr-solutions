def car_race_collision(n: int):
    collisions = 0
    for i in range(2, n // 2 + 1):
        if n % i == 0:
            j = n // i
            if (
                i != j
                and all((j % k for k in range(2, int(j**0.5) + 1)))
                and all((i % k for k in range(2, int(i**0.5) + 1)))
            ):
                collisions += 1
    return str(collisions)