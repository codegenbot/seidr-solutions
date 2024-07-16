def divide(a, b):
    if b == 0:
        raise ZeroDivisionError(
            "Cannot divide by zero. Please enter a non-zero second number."
        )
    return a / b


def add(a, b):
    return a + b


while True:
    try:
        user_input = str(input(
            "Enter two numbers separated by space or '/' for division: "
        ))

        if user_input.startswith("/"):
            raise ValueError("Division operator should be in-between two numbers.")

        if "/" in user_input:
            num1, num2 = map(int, user_input.split("/"))
            result = divide(num1, num2)
        else:
            num_list = list(map(int, user_input.split()))
            if len(num_list) != 2:
                raise ValueError("Invalid input. Please enter two numbers.")
            num1, num2 = num_list
            result = add(num1, num2)

        print(result)

    except (ValueError, ZeroDivisionError, KeyboardInterrupt):
        print("Invalid input or division by zero. Please try again.")
    except EOFError:
        print("End of input reached. Exiting program.")