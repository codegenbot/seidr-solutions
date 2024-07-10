def car_race_collision(n: int):
    if not isinstance(n, int) or n < 1:
        return "Invalid input. Please enter a positive integer."
    return n * (n - 1) // 2