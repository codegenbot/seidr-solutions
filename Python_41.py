```
def car_race_collision():
    try:
        distance = int(input("Enter the distance in kilometers: "))
        speed = int(input("Enter the average speed of all cars in km/h: "))
        num_cars = int(input("Enter the number of cars participating in the race: "))
    except ValueError:
        return "Error: Invalid input. Please enter a numeric value."

    if speed == 0 or distance == 0 or num_cars == 0:
        return "Error: Speed, distance and number of cars cannot be zero."

    time_taken_hours = int(distance / (speed / 3600)) 
    time_taken_minutes = int(((distance * 60) % (speed * 3600)) // 60000)
    time_taken_seconds = int((((distance * 60) % (speed * 3600)) % 60000) // 100)

    return f"The estimated time of the car race collision is {time_taken_hours} hours, {time_taken_minutes} minutes and {time_taken_seconds} seconds for {num_cars} cars."

print(car_race_collision())