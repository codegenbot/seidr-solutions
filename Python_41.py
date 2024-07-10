def car_race_collision():
    n = int(input("Enter the number of cars: "))
    if n <= 0:
        return "Invalid input"
    collision_points = 0
    for i in range(1, n):
        collision_points += (n - i)
    return collision_points