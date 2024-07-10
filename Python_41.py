def car_race_collision(n: int) -> int:
    if n == 1:
        return 0
    elif n % 4 == 0:
        return (n // 4) ** 2 * 3 - n + 2
    elif n % 2 == 1:
        return ((n + 1) // 2) ** 2 * 3 - n + 1
    else:
        return (n // 2) ** 2 * 2 - n + 1