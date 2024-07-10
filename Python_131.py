```
def even_or_odd():
    num = int(input("Enter a number: "))
    result = digits(num)
    print("The product of odd digits is", result)

def digits(n):
    product = 1
    has_odd = False
    for digit in str(n):
        if int(digit) % 2 != 0:
            has_odd = True
            product *= int(digit)
    return product if has_odd else 1