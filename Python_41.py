def car_race_collision(n: int):
    if n <= 1:
        return 0
    total_collisions = 0
    for i in range(2, n+1):
        total_collisions += (n - i)
    return total_collisions