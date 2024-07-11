def car_race_collision(n: int, m: int):
    if n < 2:
        return m * (m - 1) // 2
    elif m == 1:
        return 0
    else:
        return sum((n - 1) * i * (n - i - 1) // (i + 1) for i in range(m))