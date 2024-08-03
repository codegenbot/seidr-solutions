n = int(input())
digits = list(map(int, input().split()))

total = 0
for i in range(n):
    if i % 2 == 1:
        double = digits[i] * 2
        total += double if double <= 9 else double - 9
    else:
        total += digits[i]

print(total)