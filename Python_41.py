def car_race_collision(num_cars):
    distance = int(input(f"Enter the number of cars: {num_cars}: ") or num_cars)
    total_distance = 0
    for i in range(1, distance+1):
        total_distance += i
    return total_distance