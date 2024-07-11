def car_race_collision(n: int, m: int):
    if n < m:
        return n * m
    else:
        total = 0
        for i in range(m-1):
            total += (m - i)
        return total