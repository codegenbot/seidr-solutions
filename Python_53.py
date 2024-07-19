def add(a, b):
    return a + b

while True:
    try:
        x = int(input("Enter first integer: "))
        y = int(input("Enter second integer: "))
        result = add(x, y)
        print(result)
        
    except ValueError:
        print("Please enter valid integers.")
    except KeyboardInterrupt:
        print("\nProgram terminated by user.")
        break