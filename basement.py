n = int(input())
arr = list(map(int, input().split()))

total = 0
for i, num in enumerate(arr):
    total += num
    if total < 0:
        print(i)
        break
else:
    print(-1)