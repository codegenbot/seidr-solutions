def car_race_collision(n: int):
    total_collisions = 0
    for i in range(1, n):
        total_collisions += i
    for i in range(2, n + 1):
        total_collisions += n - i
    return total_collisions