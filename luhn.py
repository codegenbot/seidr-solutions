n = int(input())
digits = list(map(int, input().split()))

total = 0
for i in range(0, n, 2):
    doubled = digits[i] * 2
    if doubled > 9:
        total += doubled - 9
    else:
        total += doubled

for i in range(1, n, 2):
    total += digits[i]

print(total)