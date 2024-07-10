```
def car_race_collision(n: int):
    if n == 1:
        return 0
    elif n % 2 == 0:
        return (n // 2) ** 2 + n - 1
    else:
        return (n // 2) ** 2 + n - 1