def calculate_sum():
    while True:
        try:
            x, y = map(int, input().split())
            break
        except ValueError:
            print("Invalid input. Please enter two integers.")
    return x + y

result = calculate_sum()
print(result)