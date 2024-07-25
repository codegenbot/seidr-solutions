```
def car_race_collision(n):
    total_distance = (n * (n + 1)) // 2
    collision_points = []
    for i in range(1, n+1):
        distance_covered = i
        remaining_cars = n - i
        collisions = min(i, remaining_cars)
        total_distance -= collisions
        if total_distance <= 0:
            return sum(collision_points)
    return sum(collision_points)

n = int(input("Enter the number of cars: "))
print(car_race_collision(n))