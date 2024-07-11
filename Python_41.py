```
def car_race_collision(n: int):
    total_distance = 0
    for i in range(1, n+1):
        total_distance += i
    if n > 1:
        total_distance -= (n-1) * n // 2
    return total_distance