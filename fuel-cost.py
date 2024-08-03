numbers = list(map(int, input().split()))
print(sum(max(0, x // 3 - 2) for x in numbers))