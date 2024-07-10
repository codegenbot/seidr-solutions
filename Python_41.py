```
def car_race_collision(n: int, num_cars: list):
    total_distance = 0
    for i in range(num_cars):
        if i < n:
            total_distance += (i + 1) * (n - i)
        else:
            break
    return total_distance