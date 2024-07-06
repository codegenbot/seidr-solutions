def check(n: int) -> str:
    digit_sum = sum(int(digit) for digit in str(n))
    if digit_sum % 3 == 0 and n % 3 == 0:
        return "YES"
    elif digit_sum % 3 != 0 or n % 3 != 0:
        return "NO"