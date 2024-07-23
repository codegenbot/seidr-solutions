n = int(input())
digits = list(map(int, input().split()))

total = 0
for i in range(1, n + 1):
    if i % 2 == 0:
        double_digit = digits[i - 1] * 2
        if double_digit > 9:
            double_digit -= 9
        total += double_digit
    else:
        total += digits[i - 1]

print(total)