```
def car_race_collision(num_cars=1, speed=0):
    n = int(input("Enter the number of cars: ") or num_cars)
    speed = float(input("Enter the speed of each car (in km/h): ") or speed)
    total_distance = n * speed
    collision_point = total_distance // 2
    return collision_point