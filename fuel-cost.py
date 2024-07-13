v = [int(input()) for _ in range(int(input()))]
print(sum([max(0, x // 3 - 2) for x in v]))