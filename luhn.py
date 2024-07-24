n = int(input())
digits = list(map(int, input().split()))

total = 0
for i in range(0, n, 2):
    digits[i] *= 2
    if digits[i] > 9:
        digits[i] -= 9
    total += digits[i]

print(total)