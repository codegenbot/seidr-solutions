def car_race_collision(n: int, direction: int):
    if direction == 0:
        return n * (n - 1)
    elif direction == 1:
        return n