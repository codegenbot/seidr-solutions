def car_race_collision(n: int):
    total_distance = 0
    for _ in range(n):
        distance = float(input("Enter the distance of each car (in km): "))
        total_distance += distance
    collision_point = total_distance // 2

    return collision_point