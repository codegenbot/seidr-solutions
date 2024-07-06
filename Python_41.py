def car_race_collision(n: int):
    if n <= 0:
        return 0
    elif n == 1:
        return "There is no collision."
    else:
        return n * (n - 1) // 2