def car_race_collision(n: int):
    total_distance = 0
    for i in range(n):
        distance = 60 + 5 * (i+1)
        total_distance += distance
    return total_distance