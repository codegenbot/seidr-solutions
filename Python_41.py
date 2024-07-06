def car_race_collision(n: int):
    if n < 1:
        return "Invalid input"
    elif n == 1:
        return "No collision"
    else:
        return str(n - 1)