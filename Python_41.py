```
def car_race_collision():
    time_to_meet = int(input("Enter time at which both cars meet: "))

    while True:
        try:
            speed1 = float(input("Enter distance traveled by car 1: "))/time_to_meet
            if speed1 < 0:
                print("Invalid input. Car's speed cannot be negative.")
            else:
                break
        except ZeroDivisionError:
            print("Invalid input. Car's speed cannot be zero.")

    while True:
        try:
            total_distance = float(input("Enter total race distance: "))
            speed2 = (total_distance - speed1 * time_to_meet) / time_to_meet
            if speed2 < 0:
                print("Invalid input. Car's speed cannot be negative.")
            else:
                break
        except ZeroDivisionError:
            print("Invalid input. Car's speed cannot be zero.")

    if abs(speed1 - speed2) == 0:
        return f"Both cars are traveling at the same speed."
    elif speed1 > speed2:
        return f"Car 1 is moving with a speed of {speed1} km/h and car 2 is moving with a speed of {speed2} km/h."
    else:
        return f"Car 1 is moving with a speed of {speed2} km/h and car 2 is moving with a speed of {speed1} km/h."


print(car_race_collision())