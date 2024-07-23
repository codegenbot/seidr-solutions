def car_race_collision(n: int):
    total_distance = 0
    for i in range(n):
        speed = float(input(f"Enter the speed of car {i+1} (in km/h): "))
        total_distance += speed

    collision_point = total_distance // 2

    return collision_point