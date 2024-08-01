```
def car_race_collision(n: int):
    collisions = 0
    for i in range(1, n):
        for j in range(i+1, n+1):
            if (i + j) % 3 == 0:
                collisions += 1
    return collisions