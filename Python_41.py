def car_race_collision():
    num_cars = int(input("Enter the number of cars: "))
    
    total_combinations = math.comb(num_cars, 2)
    
    return total_combinations