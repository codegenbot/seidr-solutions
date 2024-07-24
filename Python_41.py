def car_race_collision():
    distance = int(input("Enter the distance in kilometers: "))
    speed = int(input("Enter the average speed of all cars in km/h: "))

    time_taken_hours = int(distance / 1000 / 3600) 
    time_taken_minutes = int((distance / 1000 % 3600) / 60)
    time_taken_seconds = int((distance / 1000 % 3600) % 60)

    return f"The estimated time of the car race collision is {time_taken_hours} hours, {time_taken_minutes} minutes and {time_taken_seconds} seconds."

print(car_race_collision())