def car_race_collision(num_cars=None):
    while True:
        try:
            if num_cars is None:
                n = int(input("Enter the number of cars: "))
            else:
                n = num_cars
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")
    
    if n < 1:
        return None
    
    total_damage = 0
    for i in range(n):
        speed, damage = map(int, input(f"Enter speed and damage for car {i+1}: ").split())
        total_damage += damage * speed
        
    cont = input("Do you want to continue? (yes/no): ")
    if cont.lower() != 'yes':
        return None
    
    return f'Total damage: ${total_damage:,}'