```
def car_race_collision():
    n = int(input("Enter number of drivers: "))
    traffic_type = input("Is it one-way (1) or two-way (2) traffic? ")
    
    if int(traffic_type) == 2:
        return (n * (n - 1)) // 2
    else:
        return n