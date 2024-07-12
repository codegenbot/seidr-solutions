def car_race_collision(num_cars):
    n = num_cars
    total_distance = sum(i * (n - i) for i in range(1, n + 1))
    return total_distance