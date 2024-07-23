```
def car_race_collision(n: int):
    total_distance = 0
    for _ in range(n):
        distance = float(input(f"Enter the distance of car {int(_)+1} (in km): "))
        total_distance += distance

    collision_point = total_distance // 2

    return collision_point