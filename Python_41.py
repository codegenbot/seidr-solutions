def car_race_collision(n: int):
    return sum(i * (n - i - 1) // 2 + (i + 1) * (n - (i + 1)) // 2 for i in range(n))