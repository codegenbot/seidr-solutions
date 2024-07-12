def car_race_collision(n):
    total_distance = 0
    for i in range(1, n + 1):
        for j in range(i, n + 1):
            total_distance += (i + j - 1) * 2
    return total_distance