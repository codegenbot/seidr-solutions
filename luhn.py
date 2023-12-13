digits = input().split()[:16]

for i in range(len(digits)):
    digits[i] = int(digits[i])

for i in range(0, len(digits), 2):
    digits[i] = digits[i] * 2
    if digits[i] > 9:
        digits[i] -= 9

sum_digits = sum(digits)
print(sum_digits)