total = sum(max(int(x) // 3 - 2, 0) for x in input().split())
print(total)