```
def car_race_collision(n: int):
    if n <= 1:
        return 0
    return sum(range(2, n+1))