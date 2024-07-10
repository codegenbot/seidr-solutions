def car_race_collision():
    n = int(input("Enter the number of cars: "))
    speed_a = float(input("Enter the speed of the first car: "))
    speed_b = float(input("Enter the speed of the second car: "))
    distance_to_crash = (speed_a + speed_b) / (speed_a * speed_b)
    return distance_to_crash