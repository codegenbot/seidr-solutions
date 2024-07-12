n = int(input())
arr = [int(input()) for i in range(n)]
result = sum((x // 3 - 2) for x in arr)
print(result)