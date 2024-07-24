```
def car_race_collision(n: int):
    if n < 2:
        return False
    first_car = 0
    second_car = 1
    while True:
        if first_car == second_car:
            return True
        first_car += 1
        if first_car + 2 > n and second_car + 3 > n:
            return False
        second_car += 1