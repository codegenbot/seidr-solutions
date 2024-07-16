n = int(input())
xs = []
for _ in range(n):
    xs.append(int(input()))
xs.sort()
print(*xs)