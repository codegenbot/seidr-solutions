def calculate_sum():
    while True:
        x, y = map(int, input().split())
        if isinstance(x, int) and isinstance(y, int):
            break
        else:
            print("Invalid input. Please enter two integers separated by a space.")

    return x + y

result = calculate_sum()
print(result)