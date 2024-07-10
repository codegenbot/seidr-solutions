def calculate_collision_point(a: int):
    n = int(input("Enter the number of cars: "))
    a1 = int(input("Enter the speed of car 1: "))
    a2 = int(input("Enter the speed of car 2: "))
    
    if a1 > a2:
        return (n - 1) * a2
    else:
        return (n - 1) * a1