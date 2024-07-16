def add(a, b):
    return a + b

while True:
    try:
        user_input = input("Enter two numbers separated by space or '/' for division: ")

        if "/" in user_input:
            num1, num2 = list(map(int, user_input.split("/")))
            if num2 == 0:
                print("Cannot divide by zero. Please enter a non-zero second number.")
                continue
            result = num1 / num2
        else:
            num1, num2 = list(map(int, user_input.split()))
            if num2 == 0:
                print("Cannot divide by zero. Please enter a non-zero second number.")
                continue
            result = add(num1, num2)

        print(result)

    except (ValueError, ZeroDivisionError):
        print("Invalid input or division by zero. Please try again.")
    except IndexError:
        print("Invalid input. Please enter two numbers.")
    except KeyboardInterrupt:
        print("\nProgram interrupted by user. Exiting...")
        break
    except Exception as e:
        print("An error occurred:", e)