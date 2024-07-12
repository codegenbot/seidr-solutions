```
def max_of_two_numbers():
    num1 = int(input("Enter first number: "))
    num2 = int(input("Enter second number: "))

    if num1 > num2:
        print(f"The maximum value is {num1}.")
    elif num2 > num1:
        print(f"The maximum value is {num2}.")
    else:
        print(f"The numbers are equal, both are {num1}.")