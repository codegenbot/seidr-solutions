def car_race_collision(distance):
    cars = int(input("Enter number of cars: "))
    speed = int(input("Enter speed of each car: "))
    total_distance = cars * (cars - 1) // 2
    collision_distance = total_distance / (speed + distance)
    return round(collision_distance)