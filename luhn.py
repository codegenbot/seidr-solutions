digits = list(map(int, input().split()))

total = 0
for i, digit in enumerate(digits):
    if i % 2 == 0:
        double_digit = digit * 2
        if double_digit > 9:
            total += double_digit - 9
        else:
            total += double_digit
    else:
        total += digit

print(total)