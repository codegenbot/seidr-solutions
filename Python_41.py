def car_race_collision():
    distance = int(input("Enter the distance in kilometers: "))
    speed = int(input("Enter the average speed of all cars in km/h: "))

    time_taken_seconds = (distance / speed) * 3600
    hours = int(time_taken_seconds // 3600)
    minutes = int((time_taken_seconds % 3600) // 60)
    seconds = int(time_taken_seconds % 60)

    return f"The estimated time of the car race collision is {hours} hours, {minutes} minutes and {seconds} seconds."

print(car_race_collision())