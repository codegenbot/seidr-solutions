n = int(input())
digits = list(map(int, input().split()))

total = 0
for i in range(0, n, 2):
    double = digits[i] * 2
    total += double if double <= 9 else double - 9

for i in range(1, n, 2):
    total += digits[i]

print(total)