def check(n: int) -> str:
    digit_sum = sum(int(digit) for digit in str(n))
    if n < 1 or n > 1000:
        return "Invalid input"
    if digit_sum % 3 == 0:
        return "YES"
    else:
        return "NO"

n = int(input("Enter an integer: "))
print(check(n))