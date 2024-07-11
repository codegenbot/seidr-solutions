def find_zero():
    x1 = float(input("Enter coefficient of x^2: "))
    b1 = float(input("Enter coefficient of x: "))
    c1 = float(input("Enter constant term: "))
    
    a = x1
    b = -b1
    c = c1
    
    d = -a
    x = (-b + math.sqrt(b**2-4*a*c)) / (2*a)
    return round(x, 2)