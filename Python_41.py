```
def car_race_collision(n: int):
    total = 1
    for i in range(1, n + 1):
        j = n // i
        if i * j == n:
            total *= i
    return str(total)