n = int(input())
total = 0
for _ in range(n):
    values = map(int, input().split())
    total += sum(max(0, x // 3 - 2) for x in values)
print(total)