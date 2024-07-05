def luhn_algorithm():
    n = int(input().strip())
    digits = list(map(int, input().strip().split()))
    for i in range(n - 2, -1, -2):
        digits[i] *= 2
        if digits[i] > 9:
            digits[i] -= 9
    print(sum(digits))


luhn_algorithm()