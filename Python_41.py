def car_race_collision(num_cars):
    try:
        num_cars = int(num_cars)
    except ValueError:
        num_cars = 1
    return str((num_cars * (num_cars - 1)) // 2)