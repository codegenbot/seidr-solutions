n = int(input())
v = list(map(int, input().split()))

sum = 0
for i in range(n):
    sum += v[i]
    if sum < 0:
        print(i)
        break