```
def car_race_collision(n: int):
    return sum(1 if i < j else 0 for i in range(n) for j in range(i+1, n))