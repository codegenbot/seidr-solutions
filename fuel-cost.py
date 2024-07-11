total = sum(int(num) // 3 - 2 for num in input().split())
if total < 0:
    total = 0
print(total)