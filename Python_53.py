def calculate_sum():
    try:
        x, y = map(int, input().split())
    except ValueError:
        print("Invalid input. Please enter two integers.")
        x, y = 0, 0
    return x + y

result = calculate_sum()
print(result)