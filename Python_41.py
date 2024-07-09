```
def car_race_collision():
    cars = int(input("Enter number of cars participating in the race: "))
    speed = int(input("Enter average speed of each car in km/h: "))
    distance = (speed / 2) * ((cars * (cars - 1)) // 2)
    return distance