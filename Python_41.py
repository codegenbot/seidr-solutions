def car_race_collision():
    distance = float(input("Enter the distance of each segment in kilometers: "))
    speed1 = float(input("Enter the speed of Car 1 in km/hour: "))
    speed2 = float(input("Enter the speed of Car 2 in km/hour: "))
    time_to_collide = (distance / (speed1 + speed2))
    return time_to_collide