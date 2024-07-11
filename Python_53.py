def add():
    while True:
        x = None
        y = None
        while x is None or y is None:
            try:
                print("Enter first number: ")
                x = int(input())
                if x < 0:
                    print("Invalid input. Please enter a positive integer.")
                    x = None

                print("Enter second number: ")
                y = int(input())
                if y < 0:
                    print("Invalid input. Please enter a positive integer.")
                    y = None
            except ValueError:
                print("Invalid input. Please enter a positive integer.")
        
        while True:
            print(f"Result: {x+y}")
    
    result = add()
    if result is not None:
        print(result)