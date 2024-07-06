def car_race_collision(n: int):
    collision_count = 0
    for i in range(n):
        for j in range(i + 1, n):
            if (i - j) % 2 == 1:
                collision_count += 1
    return collision_count