def car_race_collision(n: int) -> int:
    return (n * (n - 1)) // 2 if n % 2 == 0 else ((n - 1) * (n - 2)) // 2