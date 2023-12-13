digits = input().split()[:16]

sum_digits = 0
for i in range(len(digits)):
    digit = int(digits[i])
    if i % 2 == 1:
        digit *= 2
        if digit > 9:
            digit -= 9
    sum_digits += digit

print(sum_digits)