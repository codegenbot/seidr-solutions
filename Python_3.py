while True:
    try:
        n = int(input("Enter an integer between 1 and 10: "))
        if n < 1 or n > 10:
            raise ValueError
        break
    except (ValueError, KeyboardInterrupt):
        print("Invalid input. Please enter a valid integer between 1 and 10.")
print(n)