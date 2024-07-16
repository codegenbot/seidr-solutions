def add(a, b):
    return a + b

while True:
    try:
        user_input = input("Enter two numbers separated by space or '/' for division: ")
        
        if '/' in user_input:
            num1, num2 = map(int, user_input.split('/'))
            if num2 == 0:
                raise ZeroDivisionError("Cannot divide by zero. Please enter a non-zero second number.")
            result = num1 / num2
        else:
            num1, num2 = map(int, user_input.split())
            if num2 == 0:
                raise ZeroDivisionError("Cannot divide by zero. Please enter a non-zero second number.")
            result = add(num1, num2)
        
        print(result)

    except (ValueError, ZeroDivisionError) as e:
        print(f"Invalid input or {str(e)}. Please try again.")

    except KeyboardInterrupt:
        print("\nProgram interrupted by user. Exiting...")
        break

    except Exception as e:
        print("An error occurred:", e)