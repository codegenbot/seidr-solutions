n = int(input())
digits = list(map(int, input().split()))

total = 0
for i in range(1, n, 2):
    temp = digits[i] * 2
    if temp > 9:
        temp -= 9
    total += temp

print(total)