```
def car_race_collision():
    distance = int(input("Enter the distance in kilometers: "))
    speed = int(input("Enter the average speed of all cars in km/h: "))
    time_taken = distance / speed
    hours = int(time_taken)
    minutes = int((time_taken - hours) * 60)
    seconds = int(((time_taken - hours) * 60) % 60)

    return f"The estimated time of the car race collision is {hours} hours, {minutes} minutes and {seconds} seconds."
print(car_race_collision())