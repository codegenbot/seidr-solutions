def car_race_collision(distance):
    time_to_meet = int(input("Enter time at which both cars meet: "))
    
    speed1 = distance / time_to_meet
    speed2 = (distance - speed1 * time_to_meet) / time_to_meet
    
    return speed1, speed2

distance = int(input("Enter the total race distance: "))
car_race_collision(distance)