while True:
    try:
        n = int(input("Enter an integer: "))
        print("Integer entered:", n)
        break
    except ValueError:
        print("Invalid input. Please enter a valid integer.")