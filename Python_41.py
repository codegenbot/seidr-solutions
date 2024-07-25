```
def car_race_collision(n):
    total_distance = 0
    for _ in range(n):
        speed = int(input("Enter the speed of a car (in km/h): "))
        time = 100 / speed  
        distance = speed * time
        total_distance += distance
    return total_distance

if __name__ == "__main__":
    n = int(input("Enter the number of cars: "))
    result = car_race_collision(n)
    print(result)