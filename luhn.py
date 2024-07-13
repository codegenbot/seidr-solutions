digits = list(map(int, input().split()))

total = 0
for i in range(16):
    if i % 2 == 1:
        total += digits[i] * 2 if digits[i] * 2 <= 9 else digits[i] * 2 - 9
    else:
        total += digits[i]

print(total)