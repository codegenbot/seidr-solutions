digits_count = int(input())
digits = list(map(int, input().split()))

total = 0
for i in range(digits_count):
    if i % 2 != 0:
        digit = 2 * digits[i]
        total += digit if digit <= 9 else digit - 9
    else:
        total += digits[i]

print(total)