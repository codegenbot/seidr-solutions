def car_race_collision(distance):
    speed1 = int(input("Enter speed of the first car: "))
    speed2 = int(input("Enter speed of the second car: "))
    time_to_meet = distance / (speed1 + speed2)
    total_distance = speed1 * time_to_meet
    return total_distance