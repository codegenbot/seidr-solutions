n = int(input("Enter a number: "))
try:
    product = 1
    for digit in str(n):
        if digit != '0':
            product *= int(digit)
    print(product)
except ValueError:
    print("Invalid input. Please enter an integer.")