n = int(input())
digits = list(map(int, input().split()))

total = 0
for i in range(15, -1, -1):
    if (15 - i) % 2 == 1:
        total += (2*digits[i] - 9) if digits[i] > 4 else 2*digits[i]
    else:
        total += digits[i]

print(total)