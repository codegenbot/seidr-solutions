digits = list(map(int, input().split()))

total = 0
for i in range(len(digits) - 2, -1, -2):
    total += (digits[i] * 2 - 9) if digits[i] * 2 > 9 else digits[i] * 2

for i in range(len(digits) - 1):
    total += digits[i]

print(total)