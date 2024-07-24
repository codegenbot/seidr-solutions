```
def find_zero():
    a = float(input("Enter coefficient a: "))
    b = float(input("Enter coefficient b: "))
    c = float(input("Enter constant term c: "))

    discriminant = (b**2) - (4*a*c)
    
    if discriminant > 0:
        root1 = (-b + (discriminant ** 0.5)) / (2 * a)
        root2 = (-b - (discriminant ** 0.5)) / (2 * a)
        
        return f"Roots: {root1} and {root2}"
    elif discriminant == 0:
        root = -b / (2 * a)
        
        return f"Root: {root}"
    else:
        return "No real roots"

while True:
    print("Find roots of quadratic equation ax^2 + bx + c = 0: ")
    result = find_zero()
    while True:
        response = input(f"Roots found: {result}. Do you want to solve another equation? (yes/no): ")
        if response.lower() == 'yes':
            break
        elif response.lower() == 'no':
            print("Program terminated.")
            exit(0)
        else:
            print("Invalid response. Please enter yes or no.")