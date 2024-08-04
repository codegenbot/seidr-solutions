n = int(input())
digits = list(map(int, input().split()))

total = 0
for i in range(n):
    if i % 2 == 1:
        value = digits[i] * 2
        if value > 9:
            value -= 9
        total += value
    else:
        total += digits[i]

print(total)