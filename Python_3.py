while True:
    try:
        n = int(input("Please enter a number: "))
        break
    except (ValueError, EOFError):
        print("Invalid input. Please enter a valid integer.")
print(n)