```
def check(n: int) -> str:
    digit_sum = sum(int(digit) for digit in str(n))
    if digit_sum % 3 == 0:
        return "YES"
    else:
        return "NO"

print("Enter an integer: ")
n = int(input())
print(check(n))