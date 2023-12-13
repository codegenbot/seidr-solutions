digits = [int(x) for x in input().split()[:16]]

for i in range(1, len(digits), 2):
    digits[i] = (digits[i] * 2) - (9 if digits[i] > 4 else 0)

sum_digits = sum(digits)
print(sum_digits)