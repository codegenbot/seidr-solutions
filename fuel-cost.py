n = int(input())
total = 0
for i in range(n):
    num = int(input())
    new_num = num // 3 - 2
    total += new_num
print(total)