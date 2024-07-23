def car_race_collision():
    cars = int(input("Enter the number of cars: "))
    collisions = 0
    for i in range(1, cars):
        collisions += i
    return collisions