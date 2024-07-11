digits = list(map(int, input().split()))
total = 0

for i in range(1, len(digits), 2):
    double_digit = digits[i] * 2
    total += double_digit - 9 if double_digit >= 10 else double_digit

if len(digits) % 2 == 1:
    total += digits[0]

print(total)