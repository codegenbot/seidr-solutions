def check(num1, num2):
    if num1 > num2:
        print(f"{num1} is greater than {num2}.")
    elif num1 < num2:
        print(f"{num1} is less than {num2}.")
    else:
        print("Both numbers are equal.")

while True:
    try:
        num1 = int(input("Enter first number: "))
        num2 = int(input("Enter second number: "))
        check(num1, num2)
        cont = input("Do you want to continue? (yes/no): ")
        if cont.lower() != 'yes':
            break
    except ValueError:
        print("Invalid input. Please enter a valid integer.")