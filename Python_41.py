def car_race_collision(car1_speed, car2_speed):
    total_distance = (car1_speed + car2_speed) * 100
    time_taken = total_distance / (
        min(car1_speed, car2_speed) + max(car1_speed, car2_speed)
    )
    return round(time_taken)