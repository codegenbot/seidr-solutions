digits = list(map(int, input().split()))
total = 0

for i, digit in enumerate(digits):
    if i % 2 == 0:
        doubled_digit = digit * 2
        total += doubled_digit - 9 if doubled_digit > 9 else doubled_digit
    else:
        total += digit

print(total)