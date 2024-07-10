```
def max_product_of_digits():
    n = int(input("Enter an integer: "))
    n = str(n)
    digits = list(n) 
    product = 1
    for digit in sorted(digits, reverse=True):
        if digit != '0':
            product *= int(digit)
    print(str(product) or '0')