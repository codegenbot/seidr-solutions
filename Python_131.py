```
def sum_of_digits(n):
    total = 0
    while n:
        digit = n % 10
        total += digit
        n //= 10
    return total

n = int(input("Enter an integer: "))
print(sum_of_digits(n))