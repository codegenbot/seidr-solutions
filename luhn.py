digits = list(map(int, input().split()))

total = 0
for i in range(len(digits)):
    if i % 2 == 0:
        total += digits[i] * 2 - 9 if digits[i] * 2 > 9 else digits[i] * 2
    else:
        total += digits[i]

print(total)