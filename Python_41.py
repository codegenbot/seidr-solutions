```
def car_race_collision(n: int):
    total_cars = n
    max_speed = int(input("Enter maximum speed of a car (in km/h): "))
    speed1 = float(input("Enter speed of the first car (in km/h): "))
    speed2 = float(input("Enter speed of the second car (in km/h): "))
    time_of_collision = ((max_speed - max(0, min(speed1, speed2) - min(max_speed, min(speed1, speed2)))) * 1000) // 3600
    return total_cars + time_of_collision