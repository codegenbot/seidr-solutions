def add(a, b):
    return a + b

while True:
    try:
        user_input = input("Enter two numbers separated by space or '/' for division: ")

        if "/" in user_input:
            num1, num2 = map(int, user_input.split("/"))
            if num2 == 0:
                print("Cannot divide by zero. Please enter a non-zero second number.")
                continue
            result = num1 / num2
        else:
            num_list = list(map(int, user_input.split()))
            if len(num_list) != 2:
                print("Invalid input. Please enter two numbers.")
                continue
            num1, num2 = num_list
            if num2 == 0:
                print("Cannot divide by zero. Please enter a non-zero second number.")
                continue
            result = add(num1, num2)

        print(result)

    except ZeroDivisionError:
        print("Cannot divide by zero. Please enter a non-zero second number.")
        continue

    except ValueError:
        print("Invalid input format. Please enter two valid numbers separated by space.")
        continue