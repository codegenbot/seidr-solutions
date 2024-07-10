```Python
def car_race_collision(n: int = 0, a1: int = 0, a2: int = 0):
    if a1 <= 0 and a2 <= 0:
        return n * max(a1, a2)
    else:
        total_distance = (n * max(a1, a2))
        for i in range(1, n):
            if a1 >= a2:
                total_distance += a2 - min(i, n - i) * a1
            elif a2 >= a1:
                total_distance += a1 - min(i, n - i) * a2
        return total_distance