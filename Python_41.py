```
def car_race_collision(n: int):
    total_collisions = 0
    for i in range(1, n + 1):
        for j in range(i + 1, n + 1):
            if (i % 2 == 0 and j % 4 == 0) or (i % 3 == 0 and j % 7 == 0):
                total_collisions += 1
    return total_collisions