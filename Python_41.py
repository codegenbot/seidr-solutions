```
def car_race_collision(n: int):
    collision_count = 0
    for i in range(1, n + 1):
        for j in range(i + 1, n + 1):
            if (i % 2 == 0 and j % 2 != 0) or (i % 2 != 0 and j % 2 == 0):
                collision_count += 1
    return collision_count