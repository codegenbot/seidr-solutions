def car_race_collision():
    speed1 = int(input("Enter the speed of the first car: "))
    speed2 = int(input("Enter the speed of the second car: "))

    if speed1 > 0 and speed2 > 0:
        collision_distance = (speed1 + speed2) / abs(speed1 - speed2)
        return round(collision_distance)
    else:
        return "No collision is possible"