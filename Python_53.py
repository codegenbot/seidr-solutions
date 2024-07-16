def add(a, b):
    return a + b

while True:
    try:
        num1 = input("Enter first integer number: ")
        if not num1.isnumeric():
            raise ValueError
        num1 = int(num1)

        num2 = input("Enter second integer number: ")
        if not num2.isnumeric():
            raise ValueError
        num2 = int(num2)

        result = add(num1, num2)
        print(result)
        break

    except ValueError:
        print("Please enter valid integers for both numbers.")

    except KeyboardInterrupt:
        print("\nProgram interrupted by user. Exiting...")
        break

    except Exception as e:
        print("An error occurred:", e)