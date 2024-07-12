```
def check(s):
    if int(s) % 2 == 0:
        print("The sum of the numbers is even.")
    else:
        print("The sum of the numbers is odd.")

num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))

sum_product = num1 + num2

check(str(sum_product))