```
def car_race_collision():
    total_speed = 1
    while True:
        try:
            speed = float(input("Enter speed (0 to stop): "))
            if speed == 0:
                break
            total_speed *= speed
        except ValueError:
            print("Invalid input. Please enter a number.")
    return total_speed

print(car_race_collision())