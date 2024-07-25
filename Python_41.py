```
def car_race_collision(n):
    total_distance = 0
    for _ in range(n):
        speed = int(input("Enter the speed of a car (in km/h): "))
        time = 100 / speed  
        distance = speed * time
        total_distance += distance
    return total_distance

number_of_cars = int(input("Enter the number of cars: "))
print(car_race_collision(number_of_cars))