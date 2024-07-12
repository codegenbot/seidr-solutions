Here is the modified code:

def sumOfDigits(n):
    return sum(int(digit) for digit in str(n))

def check(n):
    try:
        if isinstance(n, int) and n >= 0:
            if sumOfDigits(n) % 3 == 0:
                print("The number is divisible by 3")
            else:
                print("The number is not divisible by 3")
        else:
            print("Invalid input. Please enter a non-negative integer.")
    except ValueError:
        print("Invalid input. Please enter a valid integer.")

try:
    num = int(input("Enter the number: "))
    check(num)
except ValueError:
    print("Invalid input. Please enter a valid integer.")