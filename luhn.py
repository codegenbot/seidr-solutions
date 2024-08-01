digits = list(map(int, input().split()))

total = 0
for i in range(16):
    if (i + 1) % 2 == 0:  # double every other digit starting with the second digit
        double_digit = digits[i] * 2
        total += double_digit if double_digit <= 9 else double_digit - 9
    else:
        total += digits[i]

print(total)