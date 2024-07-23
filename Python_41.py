```
def car_race_collision(n=None):
    if n:
        total_distance = sum(speed * 2 for speed in [float(input(f"Enter the speed of car {i+1} (in km/h): ")) for i in range(n)])
        collision_point = total_distance // 2
        return collision_point
    else:
        return int(input("Enter the number of cars: "))