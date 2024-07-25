```
try:
    n = int(input("Enter the number of cars: "))
except ValueError:
    print("Invalid input. Please enter an integer.")
print(car_race_collision(n))
def car_race_collision(n):
    total_distance = 0
    for i in range(1, n + 1):
        distance_covered = sum(range(1, i + 1))
        remaining_cars = n - i
        collisions = min(i, remaining_cars)
        if collisions > 0:
            total_distance += (i * (i + 1)) // 2 - ((i - collisions) * (i - collisions + 1)) // 2
    return total_distance + (n * (n + 1)) // 2