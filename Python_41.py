def car_race_collision():
    while True:
        try:
            n = int(input("Enter the number of cars: "))
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")
    
    if n < 1:
        return None
    
    total_damage = 0
    for i in range(n):
        while True:
            try:
                values = input(f"Enter speed and damage for car {i+1}: ")
                if len(values.split()) != 2:
                    print("Invalid input. Please enter two integers separated by a space.")
                else:
                    speed, damage = map(int, values.split())
                    break
            except ValueError:
                print("Invalid input. Please enter two integers separated by a space.")
        total_damage += damage * speed
    
    return str(total_damage)

car_race_collision()