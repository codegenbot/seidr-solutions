```Python
def sumOfDigits(n):
    return sum(int(digit) for digit in str(n))

n = int(input("Enter a number: "))
for i in range(1, n+1):
    print(f"The sum of digits for {i} is: {sumOfDigits(i)}")