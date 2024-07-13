```
def check():
    n = int(input("Enter a number: "))
    if 100 <= n <= 999:
        total = sum_of_digits(n)
        print(f"The sum of digits is {total}")
    else:
        print("Invalid input. Please enter a three-digit integer.")

def sum_of_digits(n):
    total = 0
    while n:
        digit = n % 10
        total += digit
        n //= 10
    return total

check()