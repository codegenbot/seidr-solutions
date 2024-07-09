def add(a=0, b=0): 
    prompt = f"Enter the first number: {a}" if not a else str(a)
    x = int(input(prompt)) 

    prompt = f"Enter the second number: {b}" if not b else str(b)
    y = int(input(prompt))
    
    print(x + y)