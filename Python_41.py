def car_race_collision():
    distance = float(input("Enter the distance between two consecutive cars in meters: "))
    speed1 = float(input("Enter the speed of the first car in kilometers per hour: "))
    speed2 = float(input("Enter the speed of the second car in kilometers per hour: "))
    
    time = (distance / 1000) * (1 + (speed1 / 3.6)) * (1 - (speed2 / 300))
    return f"Time to collision is {time:.2f} seconds."