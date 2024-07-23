```
def car_race_collision(num_cars):
    speeds = [float(input(f"Enter the speed of car {i+1} (in km/h): ")) for i in range(num_cars)]
    total_distance = sum(speed * 2 for speed in speeds)
    collision_point = total_distance // 2
    return collision_point