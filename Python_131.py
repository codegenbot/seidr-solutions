```
def digits():
    n = int(input("Enter a number: "))
    product = 1
    for digit in str(n):
        if int(digit) % 2 != 0:
            product *= int(digit)
    return product

print(digits())