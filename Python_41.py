def car_race_collision(n: int):
    num_collisions = 0
    total_pairs = (n * (n + 1)) // 2
    for i in range(total_pairs):
        if abs(i - n + i) <= 2 * (n - i):
            num_collisions += 1
    return num_collisions