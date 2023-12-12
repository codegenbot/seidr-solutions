digits = input().split()
digits = [int(d) for d in digits]

for i in range(1, len(digits), 2):
    digits[i] *= 2
    if digits[i] > 9:
        digits[i] -= 9

sum_digits = sum(digits)
print(sum_digits)