while True:
    try:
        n = int(input("Please enter a number: "))
        if n < 1 or n > 10:
            raise ValueError
        break
    except (ValueError, EOFError):
        print("Invalid input. Please enter a valid integer between 1 and 10.")
print(n)