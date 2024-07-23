import math


def car_race_collision():
    num_cars = int(input("Enter number of cars: "))
    total_speed = math.pow(1, num_cars)
    for i in range(num_cars):
        speed = int(input(f"Enter speed of car {i+1}: "))
        total_speed = math.pow(total_speed, speed)
    return int(total_speed)