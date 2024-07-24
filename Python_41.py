```
def car_race_collision():
    while True:
        try:
            distance = int(input("Enter the distance in kilometers: "))
            speed = int(input("Enter the average speed of all cars in km/h: "))
            break
        except ValueError:
            print("Error: Invalid input. Please enter a numeric value.")

    if speed == 0 or distance == 0:
        return "Error: Speed and distance cannot be zero."

    time_taken_hours = int(distance / (speed / 3600)) 
    time_taken_minutes = int(((distance * 60) % (speed * 3600)) // 60000)
    time_taken_seconds = int((((distance * 60) % (speed * 3600)) % 60000) // 100)

    return f"The estimated time of the car race collision is {time_taken_hours} hours, {time_taken_minutes} minutes and {time_taken_seconds} seconds."

print(car_race_collision())

while True:
    try:
        speed2 = int(input("Enter the average speed of all cars in km/h (new): "))
        distance2 = int(input("Enter the distance in kilometers (new): "))
        break
    except ValueError:
        print("Error: Invalid input. Please enter a numeric value.")

time_taken_hours2 = int(distance2 / (speed2 / 3600)) 
time_taken_minutes2 = int(((distance2 * 60) % (speed2 * 3600)) // 60000)
time_taken_seconds2 = int((((distance2 * 60) % (speed2 * 3600)) % 60000) // 100)

print(f"New estimated time of the car race collision is {time_taken_hours2} hours, {time_taken_minutes2} minutes and {time_taken_seconds2} seconds.")