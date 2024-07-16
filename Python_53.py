def add(a, b):
    return a + b

while True:
    try:
        user_input = input("Enter two numbers separated by space or '/' for additional: ")

        num_list = list(map(int, user_input.replace('/', ' ').split()))

        if len(num_list) != 2:
            print("Invalid input. Please enter two numbers.")
            continue

        num1, num2 = num_list
        result = add(num1, num2)
        print(result)

    except (ValueError, KeyboardInterrupt):
        print("Invalid input. Please try again.")
    except EOFError:
        print("End of input reached. Exiting program.")