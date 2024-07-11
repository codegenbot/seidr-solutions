def car_race_collision():
    distance = int(input("Enter the number of cars: "))
    total_distance = 0
    for i in range(1, distance+1):
        total_distance += i
    return total_distance