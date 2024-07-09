def car_race_collision(car):
    speed = int(input(f"Enter speed of the {car}th car: "))
    return car * (car - 1) // 2