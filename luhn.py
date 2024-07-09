digits = list(map(int, input().split()))

total = 0
for i in range(1, len(digits), 2):
    double_digit = digits[i] * 2
    total += double_digit - 9 if double_digit > 9 else double_digit

total += sum(digits[::2])

print(total)