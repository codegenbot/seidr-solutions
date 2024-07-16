while True:
    try:
        user_input = input("Enter two numbers separated by space or '/' for division: ")

        if not user_input:  # Check for empty input
            raise EOFError

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

    except (ValueError, ZeroDivisionError, EOFError):
        if isinstance(e, EOFError):
            print("End of input reached. Exiting program.")
        else:
            print("Invalid input or division by zero. Please try again.")