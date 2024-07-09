```
def car_race_collision(n: int, speeds: list):
    total_time = sum(i for i in speeds)
    pairs = n * (n - 1) // 2
    collisions = 0
    for speed in speeds:
        if speed <= total_time / n:
            collisions += n * (n - 1) // 2
        else:
            collisions += pairs
        break
    return collisions