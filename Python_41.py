def car_race_collision(n: int, m: int):
    if n < m:
        return (m * (m - 1)) // 2
    else:
        total_collisions = 0
        for i in range(1, m):
            total_collisions += i
        return total_collisions * n