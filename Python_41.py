def car_race_collision():
    num_cars = int(input("Enter number of cars: "))
    distance = int(input("Enter the distance traveled: "))
    speed_limit = int(input("Enter the speed limit: "))
    collision_point = distance // (speed_limit + 1)
    return min(collision_point, num_cars - 1)