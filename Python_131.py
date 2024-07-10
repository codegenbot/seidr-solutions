```
try:
    n = int(input("Enter a number: "))
except ValueError:
    print("Invalid input. Please enter an integer.")
def max_product_of_digits(n):
    product = 1
    for digit in str(n):
        if digit != '0':
            product *= int(digit)
    return product

print(max_product_of_digits(n))