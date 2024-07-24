n = int(input())
total = 0
for _ in range(n):
    num = int(input())
    new_num = max(0, num // 3 - 2)
    total += new_num
print(total)