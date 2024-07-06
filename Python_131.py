def digits(n):
    product = 1
    n = int(input("Enter a number: "))
    for digit in str(n):
        if int(digit) % 2 != 0:
            product *= int(digit)
    return product

print(digits(n))