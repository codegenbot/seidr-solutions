digits = list(map(int, input().split()))
new_digits = []
for i, digit in enumerate(digits):
    if i % 2 == 1:
        doubled_digit = digit * 2
        if doubled_digit > 9:
            doubled_digit -= 9
        new_digits.append(doubled_digit)
    else:
        new_digits.append(digit)
sum_digits = sum(new_digits)
print(sum_digits)