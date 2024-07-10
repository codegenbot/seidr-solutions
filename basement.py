n = int(input())
arr = list(map(int, input().split()))

prefix_sum = 0
for i in range(n):
    prefix_sum += arr[i]
    if prefix_sum < 0:
        print(i)
        break