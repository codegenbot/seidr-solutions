```
def check():
    n = int(input("Enter a number: "))
    total = sum_of_digits(n)
    print(f"The sum of digits is {total}")

def sum_of_digits(n):
    total = 0
    while n:
        digit = n % 10
        total += digit
        n //= 10
    return total