def car_race_collision(n, a1, a2):
    if abs(a1 - a2) > 0:
        return n * (a1 + a2)
    else:
        return (n - 1) * max(a1, a2)