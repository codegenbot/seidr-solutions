def car_race_collision(n: int):
    total_distance = 0
    for i in range(1, n+1):
        distance = (i * (n - i)) + ((i-1) * (i-2))
        total_distance += distance
    return total_distance