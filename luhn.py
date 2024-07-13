n = int(input())
digits = list(map(int, input().split()))

total = 0
for i in range(0, n, 2):
    doubled_digit = digits[i] * 2
    if doubled_digit > 9:
        total += doubled_digit - 9
    else:
        total += doubled_digit

for i in range(1, n, 2):
    total += digits[i]

print(total)