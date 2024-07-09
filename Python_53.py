def add(a=0, b=0): 
    x = int(input(f"Enter the first number: {a}" if not a else str(a))) 
    y = int(input(f"Enter the second number: {b}" if not b else str(b))) 
    print(x + y)