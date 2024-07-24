```
def car_race_collision(n: int):
    collisions = 0
    for i in range(1, n):
        collisions += i
    return collisions