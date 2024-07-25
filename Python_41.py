def car_race_collision(n):
    total_distance = 0
    for i in range(1, n+1):
        speed = int(input(f"Enter the speed of a car #{i} (in km/h): "))
        time = 100 / speed  
        distance = speed * time
        total_distance += distance
    return total_distance