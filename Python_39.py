while True:
    try:
        n = int(input("Enter a number: "))
        print(n)
        break
    except ValueError:
        print("Invalid input. Please enter a valid number.")