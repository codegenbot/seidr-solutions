def car_race_collision():
    n = int(input("Enter number of cars: "))
    total_collisions = sum(range(1, n))
    return total_collisions

print(car_race_collision())