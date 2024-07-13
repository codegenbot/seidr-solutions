digits = list(map(int, input().split()))
total = 0
for i in range(0, len(digits)):
    if i % 2 == 1:
        digit = digits[i] * 2
        if digit > 9:
            digit -= 9
    else:
        digit = digits[i]
    total += digit
print(total)