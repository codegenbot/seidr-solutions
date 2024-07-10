def max_product_of_digits(n):
    product = 1
    for digit in str(n):
        if digit != '0':
            product *= int(digit)
    return product

n = int(input("Enter a number: "))
print(max_product_of_digits(n))