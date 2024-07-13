while True:
    try:
        max_fill = int(input("Enter max fill: "))
        break
    except ValueError:
        print("Invalid input. Please enter a valid number.")