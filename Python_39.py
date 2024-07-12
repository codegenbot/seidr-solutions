while True:
    try:
        n = int(input())
        break
    except ValueError:
        print("Invalid input. Please enter a valid integer.")