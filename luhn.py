digits = list(map(int, input().split()))

total = 0
for i in range(16):
    if i % 2 == 1:
        double_digit = digits[i] * 2
        total += double_digit if double_digit <= 9 else double_digit - 9
    else:
        total += digits[i]

print(total)