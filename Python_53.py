while True:
    try:
        a = int(input("Enter the first integer: "))
        b = int(input("Enter the second integer: "))
        print(a + b)
    except ValueError:
        print("Invalid input. Please enter integers only.")
    except EOFError:
        break