digits = list(map(int, input().split()))

total = 0
for i in range(len(digits)):
    if i % 2 == 1:
        doubled_digit = digits[i] * 2
        total += doubled_digit - 9 if doubled_digit > 9 else doubled_digit
    else:
        total += digits[i]

print(total)