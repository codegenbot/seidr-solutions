while True:
    try:
        a, b, c = map(int, input("Enter 3 integers separated by spaces: ").split())
        print(a + b + c)
        break
    except ValueError:
        print("Invalid input. Please enter 3 integers separated by spaces.")