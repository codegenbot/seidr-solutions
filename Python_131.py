```
def check():
    while True:
        try:
            n = int(input("Enter a number: "))
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")
    total = sum_of_digits(n)
    print(f"The sum of digits is {total}")

def sum_of_digits(n):
    total = 0
    while n:
        total += n % 10
        n //= 10
    return total

check()