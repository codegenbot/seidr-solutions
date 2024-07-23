import math

def car_race_collision(cars):
    total_speed = 1
    for car in cars:
        total_speed *= car
    return total_speed