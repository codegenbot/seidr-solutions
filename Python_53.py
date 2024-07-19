def add(a, b):
    return a + b

while True:
    try:
        x = int(input("Enter first integer: "))
        y = int(input("Enter second integer: "))
        result = add(x, y)
        print(result)
    except:
        print("An error occurred. Please make sure to enter valid integers.")
    except KeyboardInterrupt:
        print("\nKeyboard interrupt occurred.")
        break