n = int(input())
total = 0
for i in range(n):
    num = int(input())
    total += (num // 3) - 2
print(total)