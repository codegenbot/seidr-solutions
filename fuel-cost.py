n = int(input())
total = 0
for i in range(n):
    num = int(input())
    res = num // 3 - 2
    total += res
print(total)