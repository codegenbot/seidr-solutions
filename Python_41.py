```
car_race_collision = None
while car_race_collision not in range(0,7):
    try:
        car_race_collision = int(input("Enter car race collision (1-5): "))
    except ValueError:
        print("Invalid input. Please enter a number.")
check = lambda: print("Collision is severe" if car_race_collision > 5 else "Collision is moderate" if car_race_collision == 5 else "No collision")
check()