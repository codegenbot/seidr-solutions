def add(a, b):
    return a + b

while True:
    try:
        num1, num2 = map(int, input("Enter two integer numbers separated by space: ").split())
        
        if num2 == 0:
            print("Cannot divide by zero. Please enter a non-zero second number.")
            continue
        
        result = add(num1, num2)
        print(result)

    except (ValueError, ZeroDivisionError) as e:
        print("Invalid input or division by zero. Please try again.")

    except KeyboardInterrupt:
        print("\nProgram interrupted by user. Exiting...")
        break

    except Exception as e:
        print("An error occurred:", e)