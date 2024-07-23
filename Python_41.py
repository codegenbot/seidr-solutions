```
def car_race_collision(num_cars=1, speed=0):
    n = int(input(f"Enter the number of cars ({num_cars} by default): ") or num_cars)
    s = float(input(f"Enter the speed of each car (in km/h) ({speed} by default): ") or speed)
    total_distance = n * s
    collision_point = total_distance // 2
    return collision_point