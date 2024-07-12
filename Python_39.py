while True:
    n = input("Enter an integer: ")
    if n.isdigit():
        n = int(n)
        break
    else:
        print("Invalid input. Please enter a valid integer.")