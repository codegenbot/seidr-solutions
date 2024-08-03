n = int(input())
s = 0
for i in range(n):
    x = int(input())
    s += max(x // 3 - 2, 0)
print(s)