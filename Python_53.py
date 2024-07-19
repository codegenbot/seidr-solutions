def add(a, b):
    return a + b

while True:
    try:
        x = int(input("Enter first integer: "))
        y = int(input("Enter second integer: "))
        result = add(x, y)
    except (ValueError, KeyboardInterrupt):
        print("Please enter valid integers.")
    except KeyboardInterrupt:
        print("Keyboard interrupt occurred.")
        break
    else:
        print(result)