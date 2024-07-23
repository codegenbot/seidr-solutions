```
def car_race_collision(n):
    speeds = [float(input(f"Enter the speed of car {i+1} (in km/h): ")) for i in range(n)]
    total_distance = sum(speed * 2 for speed in speeds)
    collision_point = total_distance // 2
    return collision_point