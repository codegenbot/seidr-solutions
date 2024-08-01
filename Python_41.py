def car_race_collision(n: int):
    total = 0
    for i in range(1, n + 1):
        if i != 3:
            total += i
    return total