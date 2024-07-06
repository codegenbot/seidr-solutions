def car_race_collision(n: int):
    if n <= 1:
        return 0
    total_collisions = 0
    for i in range(2, n):
        total_collisions += i
    return total_collisions