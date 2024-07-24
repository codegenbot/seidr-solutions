n = int(input())
digits = list(map(int, input().split()))

total = 0
for i in range(n):
    if i % 2 == 1:
        double_digit = 2 * digits[i]
        if double_digit > 9:
            total += double_digit - 9
        else:
            total += double_digit
    else:
        total += digits[i]

print(total)