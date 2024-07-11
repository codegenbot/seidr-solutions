def car_race_collision():
    time_to_meet = int(input("Enter time at which both cars meet: "))

    while True:
        speed1 = float(input("Enter distance traveled by car 1: ")) / time_to_meet
        if speed1 >= 0:
            break
        print("Invalid input. Car's speed cannot be negative.")

    while True:
        speed2 = (float(input("Enter total race distance: ")) - speed1 * time_to_meet) / time_to_meet
        if speed2 >= 0:
            break
        print("Invalid input. Car's speed cannot be negative.")

    if abs(speed1 - speed2) > 0:
        return f"Car 1 is moving with a speed of {speed1} km/h and car 2 is moving with a speed of {speed2} km/h."
    else:
        return f"Both cars are traveling at the same speed: {speed1} km/h"

print(car_race_collision())