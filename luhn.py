def luhn_algorithm(digits):
    for i in range(len(digits) - 2, -1, -2):
        digits[i] *= 2
        if digits[i] > 9:
            digits[i] -= 9
    return sum(digits)


n = int(input())
digits = list(map(int, input().split()))
print(luhn_algorithm(digits))