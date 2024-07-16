def car_race_collision(n: int) -> int:
    if n % 2 == 0:
        return (n // 2) ** 2
    return n * (n + 1) // 2