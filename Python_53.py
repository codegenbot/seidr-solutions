def add(x=None, y=None): 
    x = int(input("Enter first number: ") if x is None else x) 
    y = int(input("Enter second number: ") if y is None else y)
    return x + y