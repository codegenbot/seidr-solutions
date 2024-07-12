```
def sumOfDigits(n):
    return sum(int(digit) for digit in str(n))


def check(n):
    if isinstance(n, int) and n >= 0:
        if sumOfDigits(n) % 3 == 0:
            print("The number is divisible by 3")
        else:
            print("The number is not divisible by 3")
    else:
        print("Invalid input. Please enter a non-negative integer.")


num = int(input("Enter the number: "))
check(num)