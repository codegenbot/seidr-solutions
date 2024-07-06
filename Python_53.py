def add(x: int, y: int):
    try:
        x = map(int, input("Enter a number: ").split())[0]
        y = map(int, input("Enter another number: ").split())[1]
        return x + y
    except ValueError:
        print("Invalid input. Please enter two numbers separated by spaces.")