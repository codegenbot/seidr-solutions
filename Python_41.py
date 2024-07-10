def car_race_collision(n: int):
    if not isinstance(n, int) or n < 1:
        return "Invalid input. Please enter a positive integer."
    for i in range(1, n + 1):
        if (i * (3 * i - 1)) // 2 == n:
            return i