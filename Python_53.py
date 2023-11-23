def calculate_sum():
    while True:
        try:
            x, y = map(int, input("Enter two integers separated by space: ").split())
            break
        except ValueError:
            print("Invalid input. Please enter two integers.")

    return x + y

result = calculate_sum()
print(result)