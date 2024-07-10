def car_race_collision():
    n = int(input("Enter the number of cars: "))
    if n < 2:
        print("There should be at least two cars in the race.")
    else:
        print(f"The {n} cars can form {car_race_collision(n)} ways with no collision.")