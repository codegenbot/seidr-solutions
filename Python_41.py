def car_race_collision(car: int, speed: int):
    print(
        f"The cars collide after {car * (car - 1) // 2} seconds at a speed of {speed} km/hr."
    )