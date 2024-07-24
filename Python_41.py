def car_race_collision(n: int):
    if n < 2:
        return False
    first_car = 0
    second_car = 1
    for _ in range(2, n):
        first_car, second_car = second_car, (first_car + second_car) % n
    return first_car == 0 or second_car == 0