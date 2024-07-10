def car_race_collision(n: int = 0, a1: int = 0, a2: int = 0):
    if a1 <= 0 and a2 <= 0:
        return 0
    else:
        total_distance = (n * max(a1, a2))
        for i in range(1, n):
            if a1 >= a2:
                if i > a2 / max(a1, a2) + 1:
                    total_distance += (i - (a2 / max(a1, a2)) - 1) * max(a1, a2)
            elif a2 >= a1:
                if i > a1 / max(a1, a2) + 1:
                    total_distance += (i - (a1 / max(a1, a2)) - 1) * max(a1, a2)
        return total_distance