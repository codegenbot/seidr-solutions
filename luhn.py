digits = list(map(int, input().split()))

total = 0
for i in range(16):
    if i % 2 == 1:
        doubled = digits[i] * 2
        if doubled > 9:
            total += doubled - 9
        else:
            total += doubled
    else:
        total += digits[i]

print(total)