total = sum(max(0, int(x) // 3 - 2) for x in map(int, input().split()))
print(total)