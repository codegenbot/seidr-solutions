digits = list(map(int, input().split()))

for i in range(1, len(digits), 2):
    digits[i] = (digits[i] * 2 - 9) if digits[i] > 4 else digits[i] * 2

sum_digits = sum(digits)
print(sum_digits)