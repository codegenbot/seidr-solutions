def car_race_collision(n: int):
    speed = float(input("Enter the speed of each car (in km/h): "))
    
    total_distance = n * speed
    
    collision_point = total_distance // 2
    
    return collision_point

print(car_race_collision(int(input("Enter the number of cars: "))))