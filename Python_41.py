```
def car_race_collision():
    total_distance = float(input("Enter the total race distance: "))
    time_at_meet = int(input("Enter time at which both cars meet: "))
    
    speed1 = (float(input("Enter distance traveled by car 1: "))) / time_at_meet
    speed2 = (total_distance - float(input("Enter distance traveled by car 2: "))) / time_at_meet
    
    if abs(speed1 - speed2) == 0:
        return f"Both cars are traveling at the same speed."
    elif speed1 > speed2:
        return f"Car 1 is moving with a speed of {speed1} km/h and car 2 is moving with a speed of {speed2} km/h."
    else:
        return f"Car 1 is moving with a speed of {speed2} km/h and car 2 is moving with a speed of {speed1} km/h."

print(car_race_collision())