while True:
    try:
        n = int(input())
        print(n)
        break
    except ValueError:
        print("Invalid input. Please enter a valid integer.")