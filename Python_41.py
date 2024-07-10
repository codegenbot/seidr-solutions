def car_race_collision(n: int):
    if not isinstance(n, int) or n < 1:
        return "Invalid input. Please enter a positive integer."
    elif n == 1:
        return 1
    else:
        return (2 * n) * car_race_collision(n - 1) // (n + 1)