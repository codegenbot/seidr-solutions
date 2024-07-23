n = int(input())
digits = list(map(int, input().split()))

total = 0
for i in range(0, n, 2):
    temp = digits[i] * 2
    total += temp if temp <= 9 else temp - 9
for i in range(1, n, 2):
    total += digits[i]

print(total)