arr = list(map(int, input().split()))
total = sum(max(x // 3 - 2, 0) for x in arr)
print(total)