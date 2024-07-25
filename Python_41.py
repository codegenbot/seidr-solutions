```
def car_race_collision(n):
    total_distance = sum(range(1, n+1))
    for i in range(1, n+1):
        distance_covered = sum(range(1, i+1))
        remaining_cars = n - i
        collisions = min(i, remaining_cars)
        total_distance -= collisions
        if total_distance <= 0:
            return 0
    return total_distance

n = int(input("Enter the number of cars: "))
print(car_race_collision(n))