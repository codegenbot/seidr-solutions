def car_race_collision(n: int):
    total_collision = 0
    for i in range(1, n + 1):
        total_collision += i
    return total_collision