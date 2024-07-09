def add(a=0, b=0): 
    x = int(input(f"Enter the first number: {a} " + str(a) if a else "")) or str(a) 
    y = int(input(f"Enter the second number: {b} " + str(b) if b else "")) or str(b) 
    print(x + y)