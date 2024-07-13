```
def sum_of_digits(n):
    return sum(int(digit) for digit in str(n))

def check():
    n = int(input("Enter a number: "))
    if 100 <= n <= 999:
        total = sum_of_digits(n)
        print(f"The sum of digits is {total}")
    else:
        print("Invalid input. Please enter a three-digit integer.")

check()