def car_race_collision(n):
    total_distance = 0
    for i in range(1, n + 1):
        total_distance += i * (n - i)
    return total_distance