n = int(input())
digits = list(map(int, input().split()))
total = 0
for i in range(1, n, 2):
    doubled_digit = 2 * digits[i]
    total += doubled_digit if doubled_digit <= 9 else doubled_digit - 9
print(total)