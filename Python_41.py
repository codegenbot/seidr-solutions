def car_race_collision(n: int):
    collision_count = 0
    for i in range(n):
        for j in range(n):
            if (i + j) % 2 == 1:
                collision_count += 1
            elif n % 2 == 0 and i + j >= n // 2:
                collision_count += 1
    return collision_count