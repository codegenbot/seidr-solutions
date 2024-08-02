n = 16
digits = list(map(int, input().split()))

total = 0
for i in range(n - 1, -1, -1):
    if (n - i) % 2 == 0:
        doubled = digits[i] * 2
        if doubled > 9:
            total += doubled - 9
        else:
            total += doubled
    else:
        total += digits[i]

print(total)