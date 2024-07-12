```
def find_zero():
    n = int(input("Enter number of coefficients: "))
    xs = []
    
    for i in range(n):
        while True:
            try:
                x = float(input(f"Enter coefficient {i+1}: "))
                xs.append(x)
                break
            except ValueError:
                print("Invalid input. Please enter a valid floating point number.")
                
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    
    a = xs[-1]
    b = -xs[1] / a
    return round(-b / (2 * a), 2)