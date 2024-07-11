```
def product_of_digits(n):
    while True:
        try:
            expected_product = int(input("Enter the product of non-zero digits: "))
            n = int(input("Enter a number: "))
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")
    
    product = 1
    for digit in str(n):
        if digit != '0':
            product *= int(digit)
    
    return expected_product == product

print(product_of_digits(None))