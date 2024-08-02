```
def car_race_collision():
    num_cars = int(input("Enter the number of cars: "))
    speed1 = float(input("Enter the speed of the first car (km/h): "))
    speed2 = float(input("Enter the speed of the second car (km/h): "))

    return num_cars * 1000 / abs(speed1 - speed2)