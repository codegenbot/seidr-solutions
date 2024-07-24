n = int(input())
digits = list(map(int, input().split()))

total = 0
for i in range(n):
    if i % 2 == 1:
        double = 2 * digits[i]
        if double > 9:
            total += double - 9
        else:
            total += double
    else:
        total += digits[i]

print(total)