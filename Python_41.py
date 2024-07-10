```
def car_race_collision():
    n = int(input("Enter number of cars: "))
    total_collisions = 0
    for i in range(1, n):
        total_collisions += i
    return total_collisions

print(car_race_collision())