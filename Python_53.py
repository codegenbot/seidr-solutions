def add(a=0, b=0): 
    x = int(input(f"Enter the first number: {a} " + str(a) if not a else '0 ')) or 0 
    y = int(input(f"Enter the second number: {b} " + str(b) if not b else '0 ')) or 0 
    print(x + y)