```
def car_race_collision(n):
    total_distance = 0
    for _ in range(n):
        print("Enter the speed of a car (in km/h): ")
        speed = int(input())
        time = 100 / speed  
        distance = speed * time
        total_distance += distance
    return total_distance