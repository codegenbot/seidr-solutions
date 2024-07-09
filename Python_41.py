def car_race_collision():
    cars = int(input("How many cars are in a row? "))
    speed = int(input("What is the speed of each car (in mph)? "))
    collisions = cars * (cars - 1) // 2
    return collisions