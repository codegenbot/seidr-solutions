n = int(input())
digits = list(map(int, input().split()))

total = 0
for i in range(n):
    if (n - i) % 2 == 0:
        digit = digits[i] * 2
        if digit > 9:
            digit -= 9
        total += digit
    else:
        total += digits[i]

print(total)