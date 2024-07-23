```
def car_race_collision(n=None):
    if n is None:
        n = int(input("Enter the number of cars: "))
    speed = float(input("Enter the speed of each car (in km/h): "))
    total_distance = n * speed
    collision_point = total_distance // 2
    return collision_point