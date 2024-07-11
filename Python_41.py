def car_race_collision():
    car1_distance = float(input("Enter distance traveled by car 1: "))
    total_race_distance = float(input("Enter total race distance: "))
    car2_distance = total_race_distance - car1_distance

    time_to_meet = car2_distance / (float(input("Enter speed of car 2: ")))

    speed1 = car1_distance / time_to_meet
    speed2 = car2_distance / time_to_meet

    if abs(speed1 - speed2) == 0:
        return f"Both cars are traveling at the same speed."
    elif speed1 > speed2:
        return f"Car 1 is moving with a speed of {speed1} km/h and car 2 is moving with a speed of {speed2} km/h."
    else:
        return f"Car 1 is moving with a speed of {speed2} km/h and car 2 is moving with a speed of {speed1} km/h."

print(car_race_collision())