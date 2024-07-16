digits = list(map(int, input().split()))

total = 0
for i in range(len(digits)):
    total += (
        (digits[i] * 2 - 9)
        if i % 2 == 1 and digits[i] * 2 > 9
        else (digits[i] * 2 - 9)
        if i % 2 == 0 and digits[i] * 2 > 9
        else digits[i] * 2
        if i % 2 == 0
        else digits[i]
    )

print(total)