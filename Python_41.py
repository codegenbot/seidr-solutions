```
def car_race_collision(n: int = 0, a1: int = 0, a2: int = 0):
    if n <= 0:
        return 0
    else:
        total_distance = 0
        for i in range(1, n + 1):  
            if a1 >= a2:
                total_distance += min(a2, (n - i + 1) * a1)
            elif a2 >= a1:
                total_distance += min(a1, (n - i + 1) * a2)
        return total_distance