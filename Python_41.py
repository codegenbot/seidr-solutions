def car_race_collision():
    n = int(input("Enter number of cars: "))
    pos1 = int(input(f"Enter the position of first car ({n} cars): "))
    pos2 = int(input(f"Enter the position of second car ({n} cars): "))

    total_collisions = 0

    for i in range(1, n + 1):
        if i <= pos1 and i <= pos2:
            total_collisions += 1
        elif i >= pos1 and i >= pos2:
            total_collisions += 1

    return total_collisions