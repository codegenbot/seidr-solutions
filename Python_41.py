```
def car_race_collision(n: int = 0, a1: int = 0, a2: int = 0):
    if a1 <= 0 and a2 <= 0:
        return n * abs(a1) + n * abs(a2)
    else:
        total_distance = n * max(abs(a1), abs(a2))
        for i in range(1, n):
            total_distance += max(abs(a1), abs(a2))
            if a1 > a2:
                total_distance += (n - i) * (a1 - a2)
            elif a2 > a1:
                total_distance += (n - i) * (a2 - a1)
        return total_distance