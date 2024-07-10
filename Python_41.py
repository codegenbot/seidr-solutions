```Python
def car_race_collision(n: int = 0, a1: int = 0, a2: int = 0):
    if not (a1 and a2):  
        return n * min(a1, a2) if min(a1, a2) else 0  
    elif a1 > a2:
        return (n - 1) * a2
    else:
        return (n - 1) * a1