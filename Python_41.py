def car_race_collision():
    cars = int(input("How many cars are racing? "))
    speed_limit = int(input("What is the speed limit for the road? "))
    print("Number of collisions: ", (cars * (cars - 1)) // 2)