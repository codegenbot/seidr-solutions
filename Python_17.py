while True:
    try:
        name = input(f"Hi, please enter your name: ")
        return name
    except ValueError:
        print("Invalid input! Please enter a valid name.")