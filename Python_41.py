def car_race_collision(n: int):
    total_distance = 0
    for i in range(1, n+1):
        distance = 2 * i
        total_distance += distance
    return total_distance