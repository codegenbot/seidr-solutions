```
def car_race_collision():
    time_to_meet_car1 = int(input("Enter time at which both cars meet: "))

    while True:
        try:
            speed1 = float(input("Enter distance traveled by car 1: "))/time_to_meet_car1
            if speed1 < 0:
                print("Invalid input. Car's speed cannot be negative.")
            else:
                break
        except ZeroDivisionError:
            print("Invalid input. Car's speed cannot be zero.")

    while True:
        try:
            speed2 = (float(input("Enter total race distance: ")) - speed1 * time_to_meet_car1) / time_to_meet_car1
            if speed2 < 0:
                print("Invalid input. Car's speed cannot be negative.")
            else:
                break
        except ZeroDivisionError:
            print("Invalid input. Car's speed cannot be zero.")

    while True:
        try:
            time_to_meet_car2 = int(input("Enter time at which car 2 meets the finish line: "))
            if time_to_meet_car2 <= 0:
                print("Invalid input. Time to meet the finish line must be greater than zero.")
            else:
                break
        except ValueError:
            print("Invalid input. Please enter a valid integer.")

    if abs(speed1 - speed2) == 0:
        return f"Both cars are traveling at the same speed."
    elif speed1 > speed2:
        return f"Car 1 is moving with a speed of {speed1} km/h and car 2 is moving with a speed of {speed2} km/h."
    else:
        return f"Car 1 is moving with a speed of {speed2} km/h and car 2 is moving with a speed of {speed1} km/h."


print(car_race_collision())