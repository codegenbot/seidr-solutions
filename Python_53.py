def add(a, b):
    return a + b

while True:
    try:
        num1, num2 = map(int, input("Enter two numbers: ").split())

        result = add(num1, num2)
        print(result)
        break

    except ValueError:
        print("Please enter valid integers for both numbers.")

    except Exception as e:
        print("An error occurred:", e)