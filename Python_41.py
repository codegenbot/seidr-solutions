```
def car_race_collision(n: int = 0, a1: int = 0, a2: int = 0):
    if n <= 0:
        return 0
    else:
        total_distance = 0
        for i in range(1, n):
            total_distance += min(a1, a2) * (n - i)
        return total_distance