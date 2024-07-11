def car_race_collision(distance):
    time_to_meet = int(input("Enter time at which both cars meet: "))

    speed1 = distance / time_to_meet
    speed2 = (distance - speed1 * time_to_meet) / time_to_meet

    return speed1, speed2


speed1, speed2 = car_race_collision(int(input("Enter the total distance: ")))
print(f"Car 1's speed is {speed1} and Car 2's speed is {speed2}")