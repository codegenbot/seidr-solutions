```Python
def car_race_collision(n: int = 0, a1: int = 0, a2: int = 0):
    if n <= 0:
        return 0
    elif a1 >= a2: 
        return (a1 - a2) * (n - 1)
    else:
        return (a2 - a1) * (n - 1)