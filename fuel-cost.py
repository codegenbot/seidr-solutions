n = int(input())
total = sum((x // 3 - 2) for x in map(int, input().split()))
print(total)