def car_race_collision():
    num_cars = int(input("Enter number of cars: "))
    total_speed = 1
    for i in range(num_cars):
        speed = int(input(f"Enter speed of car {i+1}: "))
        if speed < 0:
            print("Invalid input. Speed must be a positive integer.")
            return None
        total_speed *= speed
    return int(total_speed)