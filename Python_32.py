n = int(input())
xs = []
for i in range(n):
    xs.append(int(input()))
xs.sort()
print(*xs)