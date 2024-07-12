while True:
    try:
        n = int(input("Enter a non-negative integer: "))
        if n < 0:
            raise ValueError
        print("Integer entered:", n)
        break
    except ValueError:
        print("Invalid input. Please enter a non-negative integer.")