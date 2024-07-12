def multiply_two_numbers(x, y):
    return x * y

while True:
    try:
        print("Please enter two integers separated by a space:")
        user_input = input()
        if not user_input:
            raise ValueError("No input provided.")
        x, y = map(int, user_input.split())
        result = multiply_two_numbers(x, y)
        print(result)
        break
    except ValueError as e:
        print("Invalid input:", e)