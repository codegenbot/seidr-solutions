digits = list(map(int, input().split()))

total = 0
for i in range(15, -1, -1):
    if (15 - i) % 2 == 1:
        doubled = digits[i] * 2
        total += doubled if doubled <= 9 else doubled - 9

print(total)