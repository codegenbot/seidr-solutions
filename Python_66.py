```
def sumOfDigits(n):
    return sum(int(digit) for digit in str(n))

def check(n):
    if n % 3 == 0:
        print("The number is divisible by 3")
    else:
        print("The number is not divisible by 3")

num = int(input("Enter the number: "))
print(sumOfDigits(num))
check(num)