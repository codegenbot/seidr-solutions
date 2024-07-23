digits = list(map(int, input().split()))
total = 0
for i in range(0, len(digits), 2):
    double_digit = digits[i] * 2
    if double_digit > 9:
        double_digit -= 9
    total += double_digit
    total += digits[i + 1]

print(total)