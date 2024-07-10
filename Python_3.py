try:
    n = int(input("Enter an integer between 1 and 10: "))
    if n < 1 or n > 10:
        raise ValueError("Invalid input. Please enter a valid integer between 1 and 10.")
    print(n)
except (ValueError, EOFError) as e:
    print(e)