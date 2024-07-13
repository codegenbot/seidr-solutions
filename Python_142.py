def sum_squares(a, b):
    return (a ** 2) + (b ** 2)

while True:
    user_input = input("Please enter two numbers: ")
    try:
        num1, num2 = map(int, user_input.split())
        break
    except ValueError:
        print("Invalid input. Please enter a valid list of integers.")

if len(str(user_input)) > 0:
    result = sum_squares(num1, num2)
    print(f"The sum of squares is {result}")
else:
    print("Invalid input. Please enter a valid list of integers.")