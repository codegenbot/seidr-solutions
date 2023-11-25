def luhn(digits):
    total = 0
    for i in range(len(digits)):
        if i % 2 == 1:
            digit = digits[i] * 2
            if digit > 9:
                digit -= 9
            total += digit
    return total


if __name__ == "__main__":
    n = int(input())
    digits = list(map(int, input().split()))
    result = luhn(digits)
    print(result)