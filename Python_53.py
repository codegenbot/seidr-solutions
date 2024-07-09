def add(a=0, b=0): 
    while True:  
        x = int(input(f"Enter the first number: {a} "))
        y = int(input(f"Enter the second number: {b} "))
        print(x + y)
        response = input("Do you want to continue? (y/n) ")
        if response.lower() != "y":
            break