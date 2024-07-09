```
def car_race_collision(distance):
    cars = int(input("Enter number of cars: "))
    speed = int(input("Enter speed of the car: "))
    time_taken = distance / speed
    collisions = cars * (cars - 1) // 2
    return time_taken, collisions