try:
    n = int(input("Enter a number: "))
except ValueError:
    print("Invalid input. Please enter an integer.")
else:
    product = 1
    for digit in str(n):
        if digit != '0':
            product *= int(digit)
    print(product)