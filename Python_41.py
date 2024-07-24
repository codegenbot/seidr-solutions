```
def car_race_collision(n: int):
    total_collisions = 0
    for i in range(1, n):
        for j in range(i + 1, n):
            if (i % j == 0) or (j % i == 0):
                total_collisions += 1
    return total_collisions