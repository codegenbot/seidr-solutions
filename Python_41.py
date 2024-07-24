```
def car_race_collision(n: int):
    if n < 2:
        return False
    current_car = 0
    for i in range(1, n + 1):
        if (current_car + i) % 2 == 0:
            return i
        current_car = (current_car + 1) % 2