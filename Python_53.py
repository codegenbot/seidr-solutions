```
def find_largest_number():
    num1 = int(input("Enter the first number: "))
    num2 = int(input("Enter the second number: "))
    if num1 > num2:
        print(f"The largest number is {num1}.")
    else:
        print(f"The largest number is {num2}.")

find_largest_number()