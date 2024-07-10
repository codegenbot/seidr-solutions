```
def car_race_collision(n: int = 0, a1: int = 0, a2: int = 0):
    if n == 1:
        return 0
    elif a1 > a2:
        return (n - 1) * a2 + a2
    else:
        return (n - 1) * a1 + a1