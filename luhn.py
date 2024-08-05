digits = list(map(int, input().split()))
new_digits = []
for i in range(16):
    if i % 2 == 1:
        new_digit = digits[i] * 2
        if new_digit > 9:
            new_digit -= 9
        new_digits.append(new_digit)
    else:
        new_digits.append(digits[i])
print(sum(new_digits))