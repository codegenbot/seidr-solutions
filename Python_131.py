```
n = int(input("Enter a number: "))
def max_product_of_digits(n):
    return max(int(digit) * int(digit) for digit in str(n))
print(max_product_of_digits(n))