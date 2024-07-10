def car_race_collision():
    n = int(input("Enter the number of cars: "))
    collision_count = (n * (n - 1)) // 2
    print(f"After {n} rounds, there will be a total of {collision_count} collisions.")