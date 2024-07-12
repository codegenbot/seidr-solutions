digits = list(map(int, input().split()))
total = 0

for i in range(1, len(digits), 2):
    digits[i] *= 2
    if digits[i] > 9:
        digits[i] -= 9

total = sum(digits)
print(total)