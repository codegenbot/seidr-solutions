n = int(input())
digits = list(map(int, input().split()))

total = 0
for i in range(n):
    if i % 2 == 1:
        new_digit = digits[i] * 2
        if new_digit > 9:
            new_digit -= 9
        total += new_digit
    else:
        total += digits[i]

print(total)