```Python
def car_race_collision(n: int):
    if n < 2:
        return 0
    collisions = 0
    for i in range(1, n):
        collisions += 1  # Each car will have a collision with the one in front of it
    return collisions