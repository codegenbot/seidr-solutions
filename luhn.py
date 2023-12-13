digits = input().split()
digits = [int(d) for d in digits]

for i in range(1, len(digits), 2):
    digits[i] = (digits[i] * 2) % 9 or 9

sum_digits = sum(digits)
print(sum_digits)