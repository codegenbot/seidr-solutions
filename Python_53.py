def multiply_two_numbers(x, y):
    return x * y

while True:
    try:
        print("Please enter two integers separated by a space:")
        x, y = map(int, input().split())
        result = multiply_two_numbers(x, y)
        print(result)
        break
    except ValueError:
        print("Invalid input. Please enter integers only.")