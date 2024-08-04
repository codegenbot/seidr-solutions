n = int(input())
a = []
for i in range(n):
    a.append(int(input()))

if sum(a) % 2 == 0:
    s = sum(a) // 2
else:
    s = sum(a) // 2 + 1

sum1 = 0
for i in range(n):
    sum1 += a[i]
    if sum1 >= s:
        break

print(*a[: i + 1])
print(*a[i + 1 :])