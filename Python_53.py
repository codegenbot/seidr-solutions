def add():
    while True:
        try:
            x, y = map(int, input("Enter two integers separated by space: ").split())
            break
        except ValueError:
            print("Invalid input. Please enter two integers separated by space.")
    return x + y

print(add())