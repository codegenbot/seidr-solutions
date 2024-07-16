def add(a, b):
    return a + b

def divide(a, b):
    return a / b

while True:
    try:
        num1 = int(input("Enter first integer number: "))
        num2 = int(input("Enter second integer number: "))
        
        if num2 == 0:
            print("Cannot divide by zero. Please enter a non-zero second number.")
            continue
        
        add_result = add(num1, num2)
        print("Addition result:", add_result)
        
        div_result = divide(num1, num2)
        print("Division result:", div_result)

    except ValueError:
        print("Please enter valid integers for both numbers.")

    except ZeroDivisionError:
        print("Cannot divide by zero. Please enter a non-zero second number.")

    except KeyboardInterrupt:
        print("\nProgram interrupted by user. Exiting...")
        break

    except Exception as e:
        print("An error occurred:", e)